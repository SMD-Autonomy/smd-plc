import time
import argparse
import sys
import threading
import rti.connextdds as dds
from plc import CameraControlCustom, PanAndTiltControlCustom, LampControlCustom

class ControlPublisher:

    @staticmethod
    def camera_publisher(domain_id: float, sample_count: int, camera_id: float, power: bool, light: bool, focus: float, zoom: float):
        participant = dds.DomainParticipant(int(domain_id))
        topic = dds.Topic(participant, "CameraSetterTopic", CameraControlCustom)
        writer = dds.DataWriter(participant.implicit_publisher, topic)
        data = CameraControlCustom()        

        for count in range(sample_count):
            try:
                data.cameraID = int(camera_id)
                data.power = power
                data.light = light
                data.focus = focus
                data.zoom = zoom               
                
                writer.write(data)
                time.sleep(1)
            except KeyboardInterrupt:
                break

        print("preparing to shut down CameraSetterTopic publisher...")
    
    @staticmethod
    def lamp_publisher(domain_id: float, sample_count: int, lamp_id: float, intensity: float, power: bool):
        participant = dds.DomainParticipant(int(domain_id))
        topic = dds.Topic(participant, "LampSetterTopic", LampControlCustom)
        writer = dds.DataWriter(participant.implicit_publisher, topic)
        data = LampControlCustom()        

        for count in range(sample_count):
            try:
                data.lampID = int(lamp_id)
                data.intensity = intensity
                data.power = power

                writer.write(data)
                time.sleep(1)
            except KeyboardInterrupt:
                break

        print("preparing to shut down LampControlCustom publisher...")

    @staticmethod
    def panandtilt_publisher(domain_id: float, sample_count: int, panandtilt_id: float, x: float, y: float, z: float):
        participant = dds.DomainParticipant(int(domain_id))
        topic = dds.Topic(participant, "PanAndTiltSetterTopic", PanAndTiltControlCustom)
        writer = dds.DataWriter(participant.implicit_publisher, topic)
        data = PanAndTiltControlCustom()        

        for count in range(sample_count):
            try:
                data.panandtiltID = int(panandtilt_id)
                data.x = x
                data.y = y
                data.z = z

                writer.write(data)
                time.sleep(1)
            except KeyboardInterrupt:
                break

        print("preparing to shut down...")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Control Publisher")
    parser.add_argument("--domain_id", type=float, default=6.0, help="Domain ID")
    parser.add_argument("--sample_count", type=int, default=1, help="Sample count")
    
    # Camera arguments
    parser.add_argument("--camera_id", type=float, default=9.0, help="Camera ID")
    parser.add_argument("--camera_power", type=bool, default=True, help="Camera power")
    parser.add_argument("--camera_light", type=bool, default=True, help="Camera light")
    parser.add_argument("--camera_focus", type=float, default=22.0, help="Camera focus")
    parser.add_argument("--camera_zoom", type=float, default=25.0, help="Camera zoom")
    
    # Lamp arguments
    parser.add_argument("--lamp_id", type=float, default=9.0, help="Lamp ID")
    parser.add_argument("--lamp_intensity", type=float, default=80.0, help="Lamp intensity")
    parser.add_argument("--lamp_power", type=bool, default=True, help="Lamp power")
    
    # Pan and Tilt arguments
    parser.add_argument("--panandtilt_id", type=float, default=9.0, help="Pan and Tilt ID")
    parser.add_argument("--panandtilt_x", type=float, default=80.0, help="Pan and Tilt X")
    parser.add_argument("--panandtilt_y", type=float, default=20.0, help="Pan and Tilt Y")
    parser.add_argument("--panandtilt_z", type=float, default=23.0, help="Pan and Tilt Z")
    
    args = parser.parse_args()

    func1 = threading.Thread(target=ControlPublisher.camera_publisher, args=(args.domain_id, args.sample_count, args.camera_id, args.camera_power, args.camera_light, args.camera_focus, args.camera_zoom))
    func1.start()
    
    func2 = threading.Thread(target=ControlPublisher.lamp_publisher, args=(args.domain_id, args.sample_count, args.lamp_id, args.lamp_intensity, args.lamp_power))
    func2.start()
    
    func3 = threading.Thread(target=ControlPublisher.panandtilt_publisher, args=(args.domain_id, args.sample_count, args.panandtilt_id, args.panandtilt_x, args.panandtilt_y, args.panandtilt_z))
    func3.start()
