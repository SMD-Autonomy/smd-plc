import rclpy
from rclpy.node import Node
from plc_msgs.msg import CameraControlCustom, LampControlCustom, PanAndTiltControlCustom


class ControlPublisher(Node):
    def __init__(self):
        super().__init__('control_publisher')

        # Declare parameters for Camera Control
        self.declare_parameter('camera_id', 9)
        self.declare_parameter('camera_power', True)
        self.declare_parameter('camera_light', True)
        self.declare_parameter('camera_focus', 22.0)
        self.declare_parameter('camera_zoom', 25.0)

        # Declare parameters for Lamp Control
        self.declare_parameter('lamp_id', 9)
        self.declare_parameter('lamp_intensity', 80.0)
        self.declare_parameter('lamp_power', True)

        # Declare parameters for Pan and Tilt Control
        self.declare_parameter('panandtilt_id', 9)
        self.declare_parameter('panandtilt_x', 80.0)
        self.declare_parameter('panandtilt_y', 20.0)
        self.declare_parameter('panandtilt_z', 23.0)

        # Publishers for each topic
        self.camera_publisher = self.create_publisher(CameraControlCustom, 'CameraSetterTopic', 10)
        self.lamp_publisher = self.create_publisher(LampControlCustom, 'LampSetterTopic', 10)
        self.panandtilt_publisher = self.create_publisher(PanAndTiltControlCustom, 'PanAndTiltSetterTopic', 10)

        # Timers for periodic publishing (1 Hz frequency)
        self.create_timer(1.0, self.publish_camera_data)
        self.create_timer(1.0, self.publish_lamp_data)
        self.create_timer(1.0, self.publish_panandtilt_data)

    def publish_camera_data(self):
        msg = CameraControlCustom()
        msg.cameraID = int(self.get_parameter('camera_id').value)
        msg.power = bool(self.get_parameter('camera_power').value)
        msg.light = bool(self.get_parameter('camera_light').value)
        msg.focus = float(self.get_parameter('camera_focus').value)
        msg.zoom = float(self.get_parameter('camera_zoom').value)

        self.camera_publisher.publish(msg)
        self.get_logger().info(f'Published Camera Data: {msg}')

    def publish_lamp_data(self):
        msg = LampControlCustom()
        msg.lampID = int(self.get_parameter('lamp_id').value)
        msg.intensity = float(self.get_parameter('lamp_intensity').value)
        msg.power = bool(self.get_parameter('lamp_power').value)

        self.lamp_publisher.publish(msg)
        self.get_logger().info(f'Published Lamp Data: {msg}')

    def publish_panandtilt_data(self):
        msg = PanAndTiltControlCustom()
        msg.panandtiltID = int(self.get_parameter('panandtilt_id').value)
        msg.x = float(self.get_parameter('panandtilt_x').value)
        msg.y = float(self.get_parameter('panandtilt_y').value)
        msg.z = float(self.get_parameter('panandtilt_z').value)

        self.panandtilt_publisher.publish(msg)
        self.get_logger().info(f'Published Pan and Tilt Data: {msg}')


def main(args=None):
    rclpy.init(args=args)

    control_publisher = ControlPublisher()

    try:
        rclpy.spin(control_publisher)
    except KeyboardInterrupt:
        control_publisher.get_logger().info("Shutting down...")
    finally:
        control_publisher.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
