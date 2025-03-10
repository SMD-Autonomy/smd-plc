#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp>      // for sleep()
#include <rti/config/Logger.hpp>  // for logging
#include "application.hpp"  // for command line parsing and ctrl-c
#include "plc.hpp"

class HelperMethods
{
    public:
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
    
};

HelperMethods helpermethods;

// Global DDS entities
dds::domain::DomainParticipant participant(0);
dds::pub::Publisher publisher(participant);
dds::topic::Topic< ::CameraControl> camera_topic(participant, "CameraControlTopic");
dds::topic::Topic< ::LampControl> lamp_topic(participant, "LampControlTopic");
dds::topic::Topic< ::PanAndTiltControl> panandtilt_topic(participant, "PanAndTiltControlTopic");

void camera_publisher(unsigned int sample_count, CameraControlStruct ccstruct)
{
    // Create a DataWriter with default QoS
    dds::pub::DataWriter< ::CameraControl> writer(publisher, camera_topic);

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

void lamp_publisher(unsigned int sample_count, LampControlStruct lcstruct)
{
    // Create a DataWriter with default QoS
    dds::pub::DataWriter< ::LampControl> writer(publisher, lamp_topic);

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

void panandtilt_publisher(unsigned int sample_count, PanAndTiltControlStruct ptcstruct)
{
    // Create a DataWriter with default QoS
    dds::pub::DataWriter< ::PanAndTiltControl> writer(publisher, panandtilt_topic);

    bool var_tilt_bool = helpermethods.float_to_bool(ptcstruct.x);
    bool var_pan_bool = helpermethods.float_to_bool(ptcstruct.z);

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
