import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():

    config_path = os.path.join(
        get_package_share_directory('controller'),
        'config'
    )
    return LaunchDescription([
        Node(
            package="controller",
            executable="controller",
            name="controller",
            output="screen",
            parameters=[os.path.join(config_path, 'controller_config.yaml')]
        ),
    ])