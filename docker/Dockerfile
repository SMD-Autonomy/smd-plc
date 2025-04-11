# The Dockerfile is based on the official Ubuntu image for the jammy release. 
# The CONNEXT_VERSION argument is used to specify the version of RTI Connext to install. 
# The RTI_LICENSE_AGREEMENT_ACCEPTED argument is used to accept the RTI license agreement during installation.
# The NDDSHOME environment variable is set to the installation directory of RTI Connext.
#
# The Dockerfile installs the requisite RTI Connext Debian Packages from the official RTI repository. It also installs some build tools and the license file.
#
# The CMD instruction specifies the default command to run when the container starts. In this case, it runs the /bin/bash shell.
#
# To build the Docker image, run the following command from the root repository folder:
#   docker build -t connext:smdopcua -f docker/Dockerfile --build-arg RTI_LICENSE_AGREEMENT_ACCEPTED=accepted --build-arg CONNEXT_VERSION=7.3.0 .
#
# To run the Docker container, run the following command:
#   docker run -it --rm --net=host -v $RTI_LICENSE_FILE:/root/rti_license.dat connext:smdopcua 
#
#   The -it option is used to run the container in interactive mode.
#   The --rm option is used to remove the container when it exits.
#
# The container will start and run the /bin/bash shell.

FROM ubuntu:jammy AS install-stage

ARG CONNEXT_VERSION=7.3.0
ARG RTI_LICENSE_AGREEMENT_ACCEPTED

ENV DISPLAY=:0
ENV SHELL=/bin/bash
ENV TZ=Europe/London
ENV NDDSHOME=/opt/rti.com/rti_connext_dds-${CONNEXT_VERSION}
ENV ROSHOME=/opt/ros/humble/include

# Install the required packages
RUN export DEBIAN_FRONTEND=noninteractive \
    && apt-get update \
    && apt-get install -y \
    ca-certificates \
    dash \
    tzdata \
    git \
    build-essential \
    cmake \
    curl \
    nano \
    tmux \
    python3 \
    python3-pip \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists

# Install the RTI Connext Debian Package
RUN curl -sSL -o /usr/share/keyrings/rti-official-archive.gpg \
    https://packages.rti.com/deb/official/repo.key

RUN printf -- "deb [arch=%s, signed-by=%s] %s %s main\n" \
    $(dpkg --print-architecture) \
    /usr/share/keyrings/rti-official-archive.gpg \
    https://packages.rti.com/deb/official \
    $(. /etc/os-release && echo ${VERSION_CODENAME}) | tee /etc/apt/sources.list.d/rti-official.list >/dev/null

RUN export DEBIAN_FRONTEND=noninteractive \
    RTI_LICENSE_AGREEMENT_ACCEPTED=${RTI_LICENSE_AGREEMENT_ACCEPTED} \
    && apt-get update \
    && apt-get install -y \
    rti-connext-dds-${CONNEXT_VERSION}-services-routing \
    rti-connext-dds-${CONNEXT_VERSION}-services-routing-dev \
    rti-connext-dds-${CONNEXT_VERSION}-lib-dev \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists


WORKDIR /root


RUN mkdir -p /root/smd-plc/app
RUN mkdir -p /root/smd-plc/publisher_control
WORKDIR /root/smd-plc

COPY plc.idl plc_control_service.xml requirements.txt run_tmux.sh /root/smd-plc/
COPY publisher_control/ /root/smd-plc/publisher_control/
COPY app/ /root/smd-plc/app/

# Install the required Python packages
RUN python3 -m pip install --upgrade pip
RUN pip install -r requirements.txt

# Clone the gateway branch without history and build
WORKDIR /root
RUN git clone --depth 1 --recurse-submodule https://github.com/rticommunity/rticonnextdds-gateway-opcua.git
WORKDIR /root/rticonnextdds-gateway-opcua
RUN mkdir -p /root/rticonnextdds-gateway-opcua/build 
WORKDIR /root/rticonnextdds-gateway-opcua/build 
RUN cmake -DCONNEXTDDS_ARCH=x64Linux4gcc7.3.0 -DCMAKE_INSTALL_PREFIX=/root/smd-plc/gateway-opcua -DCMAKE_BUILD_TYPE=release ..
RUN cmake --build .
RUN cmake --install . 

RUN apt-get clean -y
RUN apt-get update -y
RUN apt install software-properties-common -y
RUN add-apt-repository universe -y
RUN apt update && apt install curl gnupg2 lsb-release -y
RUN curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
RUN echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | tee /etc/apt/sources.list.d/ros2.list > /dev/null
RUN apt-get clean -y
RUN apt-get update -y
RUN apt-get install ros-humble-ros-base -y

WORKDIR /root/smd-plc/app

RUN echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc

# Build the source code
RUN make -f makefile_plc_x64Linux4gcc7.3.0

# Configure licence file
RUN echo "export RTI_LICENSE_FILE=/root/rti_license.dat" >> /root/.bashrc
RUN rm ${NDDSHOME}/rti_license.dat
RUN ln -s /root/rti_licence.dat ${NDDSHOME}/rti_license.dat

# Tweaks
RUN echo "source ${NDDSHOME}/resource/scripts/rtisetenv_*.bash" >> /root/.bashrc
RUN echo 'mkcd() { mkdir -p "$1" && cd "$1"; }' >> /root/.bashrc

FROM scratch AS final-stage

WORKDIR /root

COPY --from=install-stage / /

CMD ["/bin/bash"]
