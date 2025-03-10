#include <algorithm>
#include <thread>
#include <vector>
#include <iostream>

#include <dds/sub/ddssub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/config/Logger.hpp>  // for logging

#include "plc.hpp"
#include "application.hpp"
#include "plc_publisher.hpp"  // for command line parsing and ctrl-c

int process_camera_data(dds::sub::DataReader< ::CameraControlCustom> reader, unsigned int domain_id, unsigned int sample_count)
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

int process_panandtilt_data(dds::sub::DataReader< ::PanAndTiltControlCustom> reader, unsigned int domain_id, unsigned int sample_count)
{
    int count = 0;
    dds::sub::LoanedSamples< ::PanAndTiltControlCustom> samples = reader.take();
    for (auto sample : samples) {
        if (sample.info().valid()) {
            if (inbound_queue.size() > 25)
            {
                std::cout << "Work queue is full, discarding work" << std::endl;
                continue;
            }
            else
            {
                std::lock_guard<std::mutex> lock(work_mutex);
                inbound_queue.push_back(std::move(sample.data()));
                cv.notify_one();
            }

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


void camera_subscriber(dds::domain::DomainParticipant& participant, dds::topic::Topic< ::CameraControlCustom>& topic, unsigned int domain_id, unsigned int sample_count)
{
    dds::sub::Subscriber subscriber(participant);
    dds::sub::DataReader< ::CameraControlCustom> reader(subscriber, topic); 

    unsigned int samples_read = 0;
    dds::sub::cond::ReadCondition read_condition(
        reader,
        dds::sub::status::DataState::any(),
        [&, reader]() { samples_read += process_camera_data(reader, domain_id, sample_count); });

    dds::core::cond::WaitSet waitset;
    waitset += read_condition;

    while (!application::shutdown_requested && samples_read < sample_count) {
        std::cout << "::CameraControlCustom subscriber sleeping up to 1 sec..." << std::endl;
        waitset.dispatch(dds::core::Duration(1));
    }
}

void lamp_subscriber(dds::domain::DomainParticipant& participant, dds::topic::Topic< ::LampControlCustom>& topic, unsigned int domain_id, unsigned int sample_count)
{
    dds::sub::Subscriber subscriber(participant);
    dds::sub::DataReader< ::LampControlCustom> reader(subscriber, topic); 

    unsigned int samples_read = 0;
    dds::sub::cond::ReadCondition read_condition(
        reader,
        dds::sub::status::DataState::any(),
        [&, reader]() { samples_read += process_lamp_data(reader, domain_id, sample_count); });

    dds::core::cond::WaitSet waitset;
    waitset += read_condition;

    while (!application::shutdown_requested && samples_read < sample_count) {
        std::cout << "::LampControlCustom subscriber sleeping up to 1 sec..." << std::endl;
        waitset.dispatch(dds::core::Duration(1));
    }
}

void panandtilt_subscriber(dds::domain::DomainParticipant& participant, dds::topic::Topic< ::PanAndTiltControlCustom>& topic, unsigned int domain_id, unsigned int sample_count)
{
    dds::sub::Subscriber subscriber(participant);
    dds::sub::DataReader< ::PanAndTiltControlCustom> reader(subscriber, topic); 

    unsigned int samples_read = 0;
    dds::sub::cond::ReadCondition read_condition(
        reader,
        dds::sub::status::DataState::any(),
        [&, reader]() { samples_read += process_panandtilt_data(reader, domain_id, sample_count); });

    dds::core::cond::WaitSet waitset;
    waitset += read_condition;

    while (!application::shutdown_requested && samples_read < sample_count) {
        std::cout << "::PanAndTiltControlCustom subscriber sleeping up to 1 sec..." << std::endl;
        waitset.dispatch(dds::core::Duration(1));
    }
}

int main(int argc, char *argv[])
{
    using namespace application;

    auto arguments = parse_arguments(argc, argv);
    if (arguments.parse_result == ParseReturn::exit) {
        return EXIT_SUCCESS;
    } else if (arguments.parse_result == ParseReturn::failure) {
        return EXIT_FAILURE;
    }
    setup_signal_handlers();

    rti::config::Logger::instance().verbosity(arguments.verbosity);

    dds::domain::DomainParticipant participant(arguments.domain_id);

    dds::topic::Topic< ::CameraControlCustom> camera_topic(participant, "CameraSetterTopic");
    dds::topic::Topic< ::LampControlCustom> lamp_topic(participant, "LampSetterTopic");
    dds::topic::Topic< ::PanAndTiltControlCustom> panandtilt_topic(participant, "PanAndTiltSetterTopic");

    std::vector<std::thread> threads;
    std::vector<std::exception_ptr> exceptions(3);

    auto run_subscriber = [&](auto subscriber_func, auto& topic, int index) {
        try {
            subscriber_func(participant, topic, arguments.domain_id, arguments.sample_count);
        } catch (...) {
            exceptions[index] = std::current_exception();
        }
    };

    threads.emplace_back(run_subscriber, camera_subscriber, std::ref(camera_topic), 0);
    threads.emplace_back(run_subscriber, lamp_subscriber, std::ref(lamp_topic), 1);
    threads.emplace_back(run_subscriber, panandtilt_subscriber, std::ref(panandtilt_topic), 2);

    for (auto& thread : threads) {
        thread.join();
    }

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

    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
