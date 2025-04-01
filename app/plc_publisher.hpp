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
#include <map>
#include <string> 
#include <cmath>
#include <mutex>
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


    float clamp(float v, float lo, float hi)
    {
        return (v < lo) ? lo : (hi < v) ? hi : v;
    }

    int16_t bool_to_octet(bool message,int16_t id)
    {
        int16_t oct_val;
        if (message==true){
            oct_val = static_cast<int16_t>(id);
            return oct_val;
        }
        else {
            oct_val = 0;
            return oct_val;
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

    int16_t id_to_tag(uint32_t id)
    {   
        //id 1 is 0; so last id is 15
        std::map<int, std::string>  m{
        {1,"0000000000000000"}, //0
        {2,"0000000000000001"}, //1
        {3,"0000000000000010"}, //2
        {4,"0000000000000100"}, //4
        {5,"0000000000001000"}, //8
        {6,"0000000000010000"}, //16
        {7,"0000000000100000"}, //32
        {8,"0000000001000000"}, //64
        {9,"0000000010000000"}, //128
        {10,"0000000100000000"}, //256
        {11,"0000001000000000"}, //512
        {12,"0000010000000000"}, //1024
        {13,"0000100000000000"}, //2048
        {14,"0001000000000000"}, //4096
        {15,"0010000000000000"}, //8192
        {16,"0100000000000000"} //16384
        };

        std::string bin = m[id];
        int16_t i_bin = std::stoi(bin,nullptr,2);
        return i_bin;
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

    bool power_check(float intensity)
    {
        if (intensity == 0)
        {
            return true;
        }
    }
    
};

HelperMethods helpermethods;

void camera_publisher(HelperMethods::CameraControlStruct ccstruct,dds::pub::DataWriter< ::CameraControl> writer)
{
    // DDS objects behave like shared pointers or value types
    // (see https://community.rti.com/best-practices/use-modern-c-types-correctly)

    int16_t id = helpermethods.id_to_tag(ccstruct.cameraID);
    int16_t var_light_oct = helpermethods.bool_to_octet(ccstruct.light,id);
    int16_t var_power_oct = helpermethods.bool_to_octet(ccstruct.power,id);
    bool var_focus_bool = helpermethods.float_to_bool(ccstruct.focus);
    bool var_zoom_bool = helpermethods.float_to_bool(ccstruct.zoom);

    ::CameraControl data;

    data.LED(var_light_oct);
    data.power(var_power_oct);
    if (var_zoom_bool)
    {
        data.zoom_in(static_cast<int16_t>(id));
    }
    if (var_zoom_bool == false)
    {
        data.zoom_out(static_cast<int16_t>(id));
    }
    if (var_focus_bool)
    {
        data.focus_far(static_cast<int16_t>(id));
    }
    if (var_zoom_bool == false)
    {
        data.focus_near(static_cast<int16_t>(id));
    }
    std::cout << "Writing ::CameraControl" << std::endl;

    writer.write(data);

    // Send once every second
    rti::util::sleep(dds::core::Duration(1));
}

void lamp_publisher(HelperMethods::LampControlStruct lcstruct,dds::pub::DataWriter< ::LampControl> writer)
{
    // DDS objects behave like shared pointers or value types
    // (see https://community.rti.com/best-practices/use-modern-c-types-correctly)


    int16_t id = helpermethods.id_to_tag(lcstruct.lampID);

    float intensity = lcstruct.intensity;

    ::LampControl data;
        bool power_check = false;
        if (lcstruct.lampID == 1){
            data.intensity().intensity_one() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        }
        if (lcstruct.lampID == 2){
            data.intensity().intensity_two() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        }
        if (lcstruct.lampID == 3){
            data.intensity().intensity_three() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        }
        if (lcstruct.lampID == 4){
            data.intensity().intensity_four() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        }
        if (lcstruct.lampID == 5){
            data.intensity().intensity_five() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        }
        if (lcstruct.lampID == 6){
            data.intensity().intensity_six() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        }
        if (lcstruct.lampID == 7){
            data.intensity().intensity_seven() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        }
        if (lcstruct.lampID == 8){
            data.intensity().intensity_eight() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        }
        if (lcstruct.lampID == 9){
            data.intensity().intensity_nine() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        }
        if (lcstruct.lampID == 10){
            data.intensity().intensity_ten() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        }
        if (lcstruct.lampID == 11){
            data.intensity().intensity_eleven() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        }
        if (lcstruct.lampID == 12){
            data.intensity().intensity_twelve() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        }
        if (lcstruct.lampID == 13){
            data.intensity().intensity_thirteen() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        }
        if (lcstruct.lampID == 14){
            data.intensity().intensity_fourteen() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        }
        if (lcstruct.lampID == 15){
            data.intensity().intensity_fifteen() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        }
        if (lcstruct.lampID == 16){
            data.intensity().intensity_sixteen() = intensity;
            power_check = helpermethods.power_check(intensity);
            if (!power_check){
                data.power(static_cast<int16_t>(id));
            }
        } 
        std::cout << "Writing ::LampControl" << std::endl;

        writer.write(data);

        // Send once every second
        rti::util::sleep(dds::core::Duration(1));

}

void panandtilt_publisher(HelperMethods::PanAndTiltControlStruct ptcstruct,dds::pub::DataWriter< ::PanAndTiltControl> writer)
{
    // DDS objects behave like shared pointers or value types
    // (see https://community.rti.com/best-practices/use-modern-c-types-correctly)

    // Start communicating in a domain, usually one participant per application
   
    int16_t id = helpermethods.id_to_tag(ptcstruct.panandtiltID);
    bool var_tilt_bool = helpermethods.float_to_bool(ptcstruct.x);
    bool var_pan_bool = helpermethods.float_to_bool(ptcstruct.z);

    ::PanAndTiltControl data;
    // Main loop, write data
    // for (unsigned int samples_written = 0;
    // !application::shutdown_requested && samples_written < sample_count;
    // samples_written++) {
        // Modify the data to be written here
        if (var_tilt_bool)
        {
            data.tilt_up(static_cast<int16_t>(id));
        }
        if (var_tilt_bool == false)
        {
            data.tilt_down(static_cast<int16_t>(id));
        }
        if (var_pan_bool)
        {
            data.pan_right(static_cast<int16_t>(id));
        }
        if (var_pan_bool == false)
        {
            data.pan_left(static_cast<int16_t>(id));
        }
        data.power(static_cast<int16_t>(id));
        
        std::cout << "Writing ::PanAndTiltControl " << std::endl;

        writer.write(data);

        // Send once every second
        rti::util::sleep(dds::core::Duration(1));

}

void pt_position_publisher(HelperMethods::PanAndTiltPositionPublisherStruct pub_data,dds::pub::DataWriter< ::PanAndTiltPositionPublisher> writer)
{

    ::Quaternion angle = helpermethods.eulerToQuaternion(0, pub_data.tilt, pub_data.pan);

    ::PanAndTiltPositionPublisher data;

    std::cout << "Writing ::PanAndTiltPosition with ID: " << pub_data.panandtiltID 
    << ", pan: " << pub_data.pan 
    << ", tilt: " << pub_data.tilt 
    << ", quaternion: (" << angle.x() << ", " << angle.y() << ", " << angle.z() << ", " << angle.w() << ")" 
    << std::endl;
    data.panandtiltID(pub_data.panandtiltID);
    data.angle(angle);
    writer.write(data);
    // Send once every second
    rti::util::sleep(dds::core::Duration(1));
}