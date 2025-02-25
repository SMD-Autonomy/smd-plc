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

void camera_publisher(unsigned int domain_id, unsigned int sample_count, CameraControlStruct ccstruct)
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

void lamp_publisher(unsigned int domain_id, unsigned int sample_count, LampControlStruct lcstruct)
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

void panandtilt_publisher(unsigned int domain_id, unsigned int sample_count,PanAndTiltControlStruct ptcstruct)
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

int main(int argc, char *argv[])
{
    using namespace application;

    // Parse arguments and handle control-C
    auto arguments = parse_arguments(argc, argv);
    if (arguments.parse_result == ParseReturn::exit) {
        return EXIT_SUCCESS;
    } else if (arguments.parse_result == ParseReturn::failure) {
        return EXIT_FAILURE;
    }
    setup_signal_handlers();

    // Sets Connext verbosity to help debugging
    rti::config::Logger::instance().verbosity(arguments.verbosity);

    std::vector<std::thread> threads;
    std::vector<std::exception_ptr> exceptions(3);

    // Sample control data for each publisher
    CameraControlStruct camera_control_data = {8, true, true, 22, 25};
    LampControlStruct lamp_control_data = {8, 75, true};
    PanAndTiltControlStruct pan_and_tilt_control_data = {8, 80, 20, 23};

    // Lambda function to run a publisher and catch exceptions
    auto run_publisher = [&](auto publisher_func, int index, auto control_data) {
        try {
            publisher_func(arguments.domain_id, arguments.sample_count, control_data);
        } catch (...) {
            exceptions[index] = std::current_exception();
        }
    };

    // Create threads for each publisher, passing the control data
    threads.emplace_back(run_publisher, camera_publisher, 0, camera_control_data);
    threads.emplace_back(run_publisher, lamp_publisher, 1, lamp_control_data);
    threads.emplace_back(run_publisher, panandtilt_publisher, 2, pan_and_tilt_control_data);

    // Wait for all threads to complete
    for (auto& thread : threads) {
        thread.join();
    }

    // Check for exceptions
    for (int i = 0; i < 3; ++i) {
        if (exceptions[i]) {
            try {
                std::rethrow_exception(exceptions[i]);
            } catch (const std::exception& ex) {
                std::cerr << "Exception in publisher " << i << ": " << ex.what() << std::endl;
                return EXIT_FAILURE;
            }
        }
    }

    // Releases the memory used by the participant factory.  Optional at
    // application exit
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}