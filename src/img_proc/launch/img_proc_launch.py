from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    config_path = '/home/f1t/mech_devel/f1t_mech_ws/src/img_proc/config/img_proc_config.yaml'

    return LaunchDescription([
        Node(
            package="img_proc",
            executable="img_proc_node",
            name="img_proc_node",
            output="screen",
            parameters=[config_path]
        ),
    ])