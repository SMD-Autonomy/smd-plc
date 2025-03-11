#!/bin/bash

# This script installs ROS 2 Jazzy on Ubuntu based on the instructions from:
# https://docs.ros.org/en/jazzy/Installation/Alternatives/Ubuntu-Development-Setup.html

# Exit immediately if a command exits with a non-zero status.
set -e

# --- System Setup ---
echo "Setting up the system..."

# Set locale
echo "Setting locale to en_US.UTF-8"
apt update
apt install locales
locale-gen en_US en_US.UTF-8
update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8
echo "Locale settings:"
locale

# Enable required repositories
echo "Enabling required repositories..."
apt install software-properties-common -y
add-apt-repository universe -y

# Add the ROS 2 GPG key
echo "Adding ROS 2 GPG key..."
apt update &&  apt install curl -y
curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg

# Add the ROS 2 repository to your sources list
echo "Adding ROS 2 repository to sources list..."
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" |  tee /etc/apt/sources.list.d/ros2.list > /dev/null

# Install development tools
echo "Installing development tools..."
apt update && apt install -y \
    python3-flake8-blind-except \
    python3-flake8-class-newline \
    python3-flake8-deprecated \
    python3-mypy \
    python3-pip \
    python3-pytest \
    python3-pytest-cov \
    python3-pytest-mock \
    python3-pytest-repeat \
    python3-pytest-rerunfailures \
    python3-pytest-runner \
    python3-pytest-timeout \
    ros-dev-tools

# --- Build ROS 2 ---
echo "Building ROS 2..."

# Get ROS 2 code
echo "Creating workspace and cloning ROS 2 repos..."
mkdir -p ~/ros2_jazzy/src
cd ~/ros2_jazzy
update-ca-certificates --fresh
export SSL_CERT_DIR=/etc/ssl/certs
vcs import --input https://raw.githubusercontent.com/ros2/ros2/jazzy/ros2.repos src

# Install dependencies using rosdep
echo "Installing dependencies using rosdep..."
apt upgrade
rosdep init
rosdep update
rosdep install --from-paths src --ignore-src -y --skip-keys "fastcdr rti-connext-dds-6.0.1 urdfdom_headers"
colcon build 

# # Build the code in the workspace
# echo "Building the code in the workspace..."
# cd ~/ros2_jazzy/
# # colcon build --symlink-install

# echo "ROS 2 Jazzy installation complete!"
# echo "Please source the setup file to use ROS 2:"
# echo ". ~/ros2_jazzy/install/local_setup.bash"
