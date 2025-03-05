/*
* (c) Copyright, Real-Time Innovations, 2020.  All rights reserved.
* RTI grants Licensee a license to use, modify, compile, and create derivative
* works of the software solely for use with RTI Connext DDS. Licensee may
* redistribute copies of the software provided that all such copies are subject
* to this license. The software is provided "as is", with no warranty of any
* type, including any warranty for fitness for any purpose. RTI is under no
* obligation to maintain or support the software. RTI shall not be liable for
* any incidental or consequential damages arising out of the use or inability
* to use the software.
*/

#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
#include <cmath>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp>      // for sleep()
#include <rti/config/Logger.hpp>  // for logging
#include "application.hpp"  // for command line parsing and ctrl-c
#include "plc.hpp"




const float PI = 3.141;


class HelperMethods
{
    public:
    struct LampControlStruct {
    
        uint32_t lampID;
        float intensity;
        bool power;
    };
    
    struct CameraControlStruct {
    
        uint32_t cameraID;
        bool power;
        bool light;
        float focus;
        float zoom;
    
    };
    
    struct PanAndTiltControlStruct {
    
        uint32_t panandtiltID;
        float x;
        float y;
        float z;
        
    };

    struct PanAndTiltPositionStruct {

        float pan_one;
        float tilt_one;
        float pan_two;
        float tilt_two;
        float pan_three;
        float tilt_three;
        float pan_four;
        float tilt_four;
        float pan_five;
        float tilt_five;
        float pan_six;
        float tilt_six;
        float pan_seven;
        float tilt_seven;
        float pan_eight;
        float tilt_eight;
    
    };

    struct PanAndTiltPositionPublisherStruct {
    
        uint32_t panandtiltID;
        float pan;
        float tilt;
    
    };

    uint8_t bool_to_octet(bool message)
    {
        uint8_t oct_val;
        if (message==true){
            oct_val = 1;
            return oct_val;
        }
        else {
            oct_val = 0;
            return oct_val;
        }
    }
    
    bool float_to_bool(float message, std::string type)
    {
        bool bool_val;
        if (type == "tilt")
        {
            message = clamp(message, -90, 90);
        }
        if (type == "pan")
        {
            message = clamp(message, -180, 180);
        } 
        if (message > 0)
        {
            bool_val = true;
            return bool_val;
        }
        else 
        {
            bool_val = false;
            return bool_val;
        }
    }

    bool float_to_bool(float message)
    {
        bool bool_val;
        message = clamp(message, -100, 100); 
        if (message > 0){
            bool_val = true;
            return bool_val;
        }
        else {
            bool_val = false;
            return bool_val;
        }
    }

    float clamp(float v, float lo, float hi)
    {
        return (v < lo) ? lo : (hi < v) ? hi : v;
    }

    ::Quaternion eulerToQuaternion(float roll, float pitch, float yaw) 
    {
        // Convert degrees to radians
        // Roll, pitch, yaw are Roll, Tilt, Pan
        float rollRad = roll * PI / 180.0;
        float pitchRad = pitch * PI / 180.0;
        float yawRad = yaw * PI / 180.0;
    
        // Calculate cosine and sine of half angles
        float cr = cos(rollRad * 0.5);
        float sr = sin(rollRad * 0.5);
        float cp = cos(pitchRad * 0.5);
        float sp = sin(pitchRad * 0.5);
        float cy = cos(yawRad * 0.5);
        float sy = sin(yawRad * 0.5);
    
        ::Quaternion q;
        q.x() = sr * cp * cy - cr * sp * sy;
        q.y() = cr * sp * cy + sr * cp * sy;
        q.z() = cr * cp * sy - sr * sp * cy;
        q.w() = cr * cp * cy + sr * sp * sy;
    
        return q;
    }
    
};

HelperMethods helpermethods;

void camera_publisher(unsigned int domain_id, unsigned int sample_count, HelperMethods::CameraControlStruct ccstruct)
{
    // DDS objects behave like shared pointers or value types
    // (see https://community.rti.com/best-practices/use-modern-c-types-correctly)

    // Start communicating in a domain, usually one participant per application
    dds::domain::DomainParticipant participant(domain_id);

    // Create a Topic with a name and a datatype
    dds::topic::Topic< ::CameraControl> topic(participant, "CameraControlTopic");

    // Create a Publisher
    dds::pub::Publisher publisher(participant);

    // Create a DataWriter with default QoS
    dds::pub::DataWriter< ::CameraControl> writer(publisher, topic);

    uint8_t var_light_oct = helpermethods.bool_to_octet(ccstruct.light);
    uint8_t var_power_oct = helpermethods.bool_to_octet(ccstruct.power);
    bool var_focus_bool = helpermethods.float_to_bool(ccstruct.focus);
    bool var_zoom_bool = helpermethods.float_to_bool(ccstruct.zoom);

    ::CameraControl data;
    // Main loop, write data
    for (unsigned int samples_written = 0;
    !application::shutdown_requested && samples_written < sample_count;
    samples_written++) {
        // Modify the data to be written here
        data.cameraID(ccstruct.cameraID);
        data.LED().CMD(var_light_oct);
        data.power().CMD(var_power_oct);
        if (var_zoom_bool)
        {
            data.zoom_in().CMD(1);
        }
        if (var_zoom_bool == false)
        {
            data.zoom_out().CMD(1);
        }
        if (var_focus_bool)
        {
            data.focus_far().CMD(1);
        }
        if (var_zoom_bool == false)
        {
            data.focus_near().CMD(1);
        }
        std::cout << "Writing ::CameraControl Status" << std::endl;

        writer.write(data);

        // Send once every second
        rti::util::sleep(dds::core::Duration(1));
    }
}

void lamp_publisher(unsigned int domain_id, unsigned int sample_count, HelperMethods::LampControlStruct lcstruct)
{
    // DDS objects behave like shared pointers or value types
    // (see https://community.rti.com/best-practices/use-modern-c-types-correctly)

    // Start communicating in a domain, usually one participant per application
    dds::domain::DomainParticipant participant(domain_id);

    // Create a Topic with a name and a datatype
    dds::topic::Topic< ::LampControl> topic(participant, "LampControlTopic");

    // Create a Publisher
    dds::pub::Publisher publisher(participant);

    // Create a DataWriter with default QoS
    dds::pub::DataWriter< ::LampControl> writer(publisher, topic);

    uint8_t var_power_oct = helpermethods.bool_to_octet(lcstruct.power);
    float intensity = lcstruct.intensity;

    ::LampControl data;
    // Main loop, write data
    for (unsigned int samples_written = 0;
    !application::shutdown_requested && samples_written < sample_count;
    samples_written++) {
        // Modify the data to be written here
        data.lampID(lcstruct.lampID);
        data.intensity(intensity);
        data.power().CMD(var_power_oct);
        std::cout << "Writing ::LampControl" << std::endl;

        writer.write(data);

        // Send once every second
        rti::util::sleep(dds::core::Duration(1));
    }
}

void panandtilt_publisher(unsigned int domain_id, unsigned int sample_count,HelperMethods::PanAndTiltControlStruct ptcstruct)
{
    // DDS objects behave like shared pointers or value types
    // (see https://community.rti.com/best-practices/use-modern-c-types-correctly)

    // Start communicating in a domain, usually one participant per application
    dds::domain::DomainParticipant participant(domain_id);

    // Create a Topic with a name and a datatype
    dds::topic::Topic< ::PanAndTiltControl> topic(participant, "PanAndTiltControlTopic");

    // Create a Publisher
    dds::pub::Publisher publisher(participant);

    // Create a DataWriter with default QoS
    dds::pub::DataWriter< ::PanAndTiltControl> writer(publisher, topic);

    bool var_tilt_bool = helpermethods.float_to_bool(ptcstruct.x, "tilt");
    bool var_pan_bool = helpermethods.float_to_bool(ptcstruct.z, "pan");

    ::PanAndTiltControl data;
    // Main loop, write data
    for (unsigned int samples_written = 0;
    !application::shutdown_requested && samples_written < sample_count;
    samples_written++) {
        // Modify the data to be written here
        data.panandtiltID(ptcstruct.panandtiltID);
        if (var_tilt_bool)
        {
            data.tilt_up().CMD(1);
        }
        if (var_tilt_bool == false)
        {
            data.tilt_down().CMD(1);
        }
        if (var_pan_bool)
        {
            data.pan_right().CMD(1);
        }
        if (var_pan_bool == false)
        {
            data.pan_left().CMD(1);
        }
        
        std::cout << "Writing ::PanAndTiltControl " << std::endl;

        writer.write(data);

        // Send once every second
        rti::util::sleep(dds::core::Duration(1));
    }
}

void pt_position_publisher(unsigned int domain_id, unsigned int sample_count, HelperMethods::PanAndTiltPositionPublisherStruct pub_data)
{
    // DDS objects behave like shared pointers or value types
    // (see https://community.rti.com/best-practices/use-modern-c-types-correctly)

    // Start communicating in a domain, usually one participant per application
    dds::domain::DomainParticipant participant(domain_id);

    // Create a Topic with a name and a datatype
    dds::topic::Topic< ::PanAndTiltPositionPublisher> topic(participant, "PanAndTiltPositionTopic");

    // Create a Publisher
    dds::pub::Publisher publisher(participant);

    // Create a DataWriter with default QoS
    dds::pub::DataWriter< ::PanAndTiltPositionPublisher> writer(publisher, topic);

    ::Quaternion angle = helpermethods.eulerToQuaternion(0, pub_data.tilt, pub_data.pan);

    ::PanAndTiltPositionPublisher data;
    // Main loop, write data
    for (unsigned int samples_written = 0;
    !application::shutdown_requested && samples_written < sample_count;
    samples_written++) {

        data.panandtiltID(pub_data.panandtiltID);
        data.angle(angle);
        writer.write(data);

        // Send once every second
        rti::util::sleep(dds::core::Duration(1));
    }
}