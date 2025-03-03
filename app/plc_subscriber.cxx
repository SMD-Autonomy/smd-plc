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

#include <algorithm>
#include <thread>
#include <vector>
#include <iostream>

#include <dds/sub/ddssub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/config/Logger.hpp>  // for logging
// alternatively, to include all the standard APIs:
//  <dds/dds.hpp>
// or to include both the standard APIs and extensions:
//  <rti/rti.hpp>
//
// For more information about the headers and namespaces, see:
//    https://community.rti.com/static/documentation/connext-dds/7.3.0/doc/api/connext_dds/api_cpp2/group__DDSNamespaceModule.html
// For information on how to use extensions, see:
//    https://community.rti.com/static/documentation/connext-dds/7.3.0/doc/api/connext_dds/api_cpp2/group__DDSCpp2Conventions.html

#include "plc.hpp"
#include "application.hpp"
#include "plc_publisher.hpp"  // for command line parsing and ctrl-c



int process_camera_data(dds::sub::DataReader< ::CameraControlCustom> reader,unsigned int domain_id, unsigned int sample_count)
{
    int count = 0;
    dds::sub::LoanedSamples< ::CameraControlCustom> samples = reader.take();
    for (auto sample : samples) {
        if (sample.info().valid()) {
            count++;
            std::cout << sample.data() << std::endl;
            
            // Copy data to CameraControlStruct
            CameraControlStruct camera_data;
            camera_data.cameraID = sample.data().cameraID();
            camera_data.power = sample.data().power();
            camera_data.light = sample.data().light();
            camera_data.focus = sample.data().focus();
            camera_data.zoom = sample.data().zoom();
            
            camera_publisher(domain_id, sample_count, camera_data);

            
        } else {
            std::cout << "Instance state changed to "
            << sample.info().state().instance_state() << std::endl;
        }
    }
    return count;
}

int process_lamp_data(dds::sub::DataReader< ::LampControlCustom> reader, unsigned int domain_id, unsigned int sample_count)
{
    int count = 0;
    dds::sub::LoanedSamples< ::LampControlCustom> samples = reader.take();
    for (auto sample : samples) {
        if (sample.info().valid()) {
            count++;
            std::cout << sample.data() << std::endl;
            
            LampControlStruct lamp_data;
            lamp_data.lampID = sample.data().lampID();
            lamp_data.intensity = sample.data().intensity();
            lamp_data.power = sample.data().power();

            lamp_publisher(domain_id, sample_count, lamp_data);
            
        } else {
            std::cout << "Instance state changed to "
            << sample.info().state().instance_state() << std::endl;
        }
    }
    return count;
}

int process_panandtilt_data(dds::sub::DataReader< ::PanAndTiltControlCustom> reader,unsigned int domain_id, unsigned int sample_count)
{
    int count = 0;
    dds::sub::LoanedSamples< ::PanAndTiltControlCustom> samples = reader.take();
    for (auto sample : samples) {
        if (sample.info().valid()) {
            count++;
            std::cout << sample.data() << std::endl;
            
            PanAndTiltControlStruct pan_and_tilt_data;
            pan_and_tilt_data.panandtiltID = sample.data().panandtiltID();
            pan_and_tilt_data.x = sample.data().x();
            pan_and_tilt_data.y = sample.data().y();
            pan_and_tilt_data.z = sample.data().z();
            panandtilt_publisher(domain_id, sample_count, pan_and_tilt_data);
            
        } else {
            std::cout << "Instance state changed to "
            << sample.info().state().instance_state() << std::endl;
        }
    }
    return count;
}


void camera_subscriber(unsigned int domain_id, unsigned int sample_count)
{

    dds::domain::DomainParticipant participant(domain_id);

    // Create a Topic with a name and a datatype
    dds::topic::Topic< ::CameraControlCustom> topic(participant, "CameraSetterTopic");

    // Create a Subscriber and DataReader with default Qos
    dds::sub::Subscriber subscriber(participant);
    dds::sub::DataReader< ::CameraControlCustom> reader(subscriber, topic); 

    // Create a ReadCondition for any data received on this reader and set a
    // handler to process the data
    unsigned int samples_read = 0;
    dds::sub::cond::ReadCondition read_condition(
        reader,
        dds::sub::status::DataState::any(),
        [&, reader]() { samples_read += process_camera_data(reader,domain_id,sample_count); });

    // WaitSet will be woken when the attached condition is triggered
    dds::core::cond::WaitSet waitset;
    waitset += read_condition;

    while (!application::shutdown_requested && samples_read < sample_count) {
        std::cout << "::CameraControlCustom subscriber sleeping up to 1 sec..." << std::endl;

        // Run the handlers of the active conditions. Wait for up to 1 second.
        waitset.dispatch(dds::core::Duration(1));
    }
}

void lamp_subscriber(unsigned int domain_id, unsigned int sample_count)
{

    dds::domain::DomainParticipant participant(domain_id);

    // Create a Topic with a name and a datatype
    dds::topic::Topic< ::LampControlCustom> topic(participant, "LampSetterTopic");

    // Create a Subscriber and DataReader with default Qos
    dds::sub::Subscriber subscriber(participant);
    dds::sub::DataReader< ::LampControlCustom> reader(subscriber, topic); 

    // Create a ReadCondition for any data received on this reader and set a
    // handler to process the data
    unsigned int samples_read = 0;
    dds::sub::cond::ReadCondition read_condition(
        reader,
        dds::sub::status::DataState::any(),
        [&, reader]() { samples_read += process_lamp_data(reader,domain_id,sample_count); });

    // WaitSet will be woken when the attached condition is triggered
    dds::core::cond::WaitSet waitset;
    waitset += read_condition;

    while (!application::shutdown_requested && samples_read < sample_count) {
        std::cout << "::LampControlCustom subscriber sleeping up to 1 sec..." << std::endl;

        // Run the handlers of the active conditions. Wait for up to 1 second.
        waitset.dispatch(dds::core::Duration(1));
    }
}

void panandtilt_subscriber(unsigned int domain_id, unsigned int sample_count)
{

    dds::domain::DomainParticipant participant(domain_id);

    // Create a Topic with a name and a datatype
    dds::topic::Topic< ::PanAndTiltControlCustom> topic(participant, "PanAndTiltSetterTopic");

    // Create a Subscriber and DataReader with default Qos
    dds::sub::Subscriber subscriber(participant);
    dds::sub::DataReader< ::PanAndTiltControlCustom> reader(subscriber, topic); 

    // Create a ReadCondition for any data received on this reader and set a
    // handler to process the data
    unsigned int samples_read = 0;
    dds::sub::cond::ReadCondition read_condition(
        reader,
        dds::sub::status::DataState::any(),
        [&, reader]() { samples_read += process_panandtilt_data(reader,domain_id,sample_count); });

    // WaitSet will be woken when the attached condition is triggered
    dds::core::cond::WaitSet waitset;
    waitset += read_condition;

    while (!application::shutdown_requested && samples_read < sample_count) {
        std::cout << "::PanAndTiltControlCustom subscriber sleeping up to 1 sec..." << std::endl;

        // Run the handlers of the active conditions. Wait for up to 1 second.
        waitset.dispatch(dds::core::Duration(1));
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

    // Lambda function to run a publisher and catch exceptions
    auto run_subscriber = [&](auto subscriber_func, int index) {
        try {
            subscriber_func(arguments.domain_id, arguments.sample_count);
        } catch (...) {
            exceptions[index] = std::current_exception();
        }
    };

    // Create threads for each publisher, passing the control data
    threads.emplace_back(run_subscriber, camera_subscriber, 0);
    threads.emplace_back(run_subscriber, lamp_subscriber, 1);
    threads.emplace_back(run_subscriber, panandtilt_subscriber, 2);

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
                std::cerr << "Exception in subscriber " << i << ": " << ex.what() << std::endl;
                return EXIT_FAILURE;
            }
        }
    }

    // Releases the memory used by the participant factory.  Optional at
    // application exit
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
