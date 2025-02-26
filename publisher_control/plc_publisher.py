
# (c) Copyright, Real-Time Innovations, 2022.  All rights reserved.
# RTI grants Licensee a license to use, modify, compile, and create derivative
# works of the software solely for use with RTI Connext DDS. Licensee may
# redistribute copies of the software provided that all such copies are subject
# to this license. The software is provided "as is", with no warranty of any
# type, including any warranty for fitness for any purpose. RTI is under no
# obligation to maintain or support the software. RTI shall not be liable for
# any incidental or consequential damages arising out of the use or inability
# to use the software.

import time
import argparse
import sys
import threading
import rti.connextdds as dds
from plc import CameraControlCustom, PanAndTiltControlCustom, LampControlCustom

class ControlPublisher:

    @staticmethod
    def camera_publisher(domain_id: int, sample_count: int):

        # A DomainParticipant allows an application to begin communicating in
        # a DDS domain. Typically there is one DomainParticipant per application.
        # DomainParticipant QoS is configured in USER_QOS_PROFILES.xml
        participant = dds.DomainParticipant(domain_id)

        # A Topic has a name and a datatype.
        topic = dds.Topic(participant, "CameraSetterTopic", CameraControlCustom)

        # DataWriter QoS is configured in USER_QOS_PROFILES.xml
        writer = dds.DataWriter(participant.implicit_publisher, topic)
        data = CameraControlCustom()        

        for count in range(sample_count):
            # Catch control-C interrupt
            try:
                # Modify the data to be sent here
                data.cameraID = 9
                data.power = True
                data.light = True
                data.focus = 22
                data.zoom = 25               
                
                writer.write(data)
                time.sleep(1)
            except KeyboardInterrupt:
                break

        print("preparing to shut down CameraSetterTopic publisher...")
    
    @staticmethod
    def lamp_publisher(domain_id: int, sample_count: int):

        # A DomainParticipant allows an application to begin communicating in
        # a DDS domain. Typically there is one DomainParticipant per application.
        # DomainParticipant QoS is configured in USER_QOS_PROFILES.xml
        participant = dds.DomainParticipant(domain_id)

        # A Topic has a name and a datatype.
        topic = dds.Topic(participant, "LampSetterTopic", LampControlCustom)

        
        # DataWriter QoS is configured in USER_QOS_PROFILES.xml
        writer = dds.DataWriter(participant.implicit_publisher, topic)
        data = LampControlCustom()        

        for count in range(sample_count):
            # Catch control-C interrupt
            try:
                # Modify the data to be sent here
                data.lampID = 9
                data.intensity = 80
                data.power = True

                writer.write(data)
                time.sleep(1)
            except KeyboardInterrupt:
                break

        print("preparing to shut down LampControlCustom publisher...")

    @staticmethod
    def panandtilt_publisher(domain_id: int, sample_count: int):

        # A DomainParticipant allows an application to begin communicating in
        # a DDS domain. Typically there is one DomainParticipant per application.
        # DomainParticipant QoS is configured in USER_QOS_PROFILES.xml
        participant = dds.DomainParticipant(domain_id)

        # A Topic has a name and a datatype.
        topic = dds.Topic(participant, "PanAndTiltSetterTopic", PanAndTiltControlCustom)

        
        # DataWriter QoS is configured in USER_QOS_PROFILES.xml
        writer = dds.DataWriter(participant.implicit_publisher, topic)
        data = PanAndTiltControlCustom()        

        for count in range(sample_count):
            # Catch control-C interrupt
            try:
                # Modify the data to be sent here
                data.panandtiltID = 9
                data.x = 80
                data.y = 20
                data.z = 23

                writer.write(data)
                time.sleep(1)
            except KeyboardInterrupt:
                break

        print("preparing to shut down...")


if __name__ == "__main__":
    func1 = threading.Thread(target=ControlPublisher.camera_publisher(domain_id=6,sample_count=1))
    func1.start()
    func2 = threading.Thread(target=ControlPublisher.lamp_publisher(domain_id=6,sample_count=1))
    func2.start()
    func3 = threading.Thread(target=ControlPublisher.panandtilt_publisher(domain_id=6,sample_count=1))
    func3.start()
