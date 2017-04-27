FROM ubuntu:16.04

MAINTAINER M@ Rixman (MatrixManAtYrService on github, mattrixman@fastmail.com)

# install dependencies
RUN apt-get update && apt-get install -y \
    cmake \
    gcc-4.8 \
    g++-4.8 \
    libboost-all-dev \
    libxerces-c-dev \
    libcurl4-openssl-dev \
    libsnmp-dev \
    libmysqlclient-dev \
    libjsoncpp-dev \
    uuid-dev \
    libusb-dev \
    libusb-1.0.0-dev \
    libftdi-dev \
    swig \
    liboctave-dev \
    gpsd \
    libgps-dev \
    portaudio19-dev \
    libsndfile-dev \
    libglib2.0-dev \
    libglibmm-2.4-dev \
    libpcre3-dev \
    libsigc++-2.0-dev \
    libxml++2.6-dev \
    libxml2-dev \
    liblzma-dev

# copy code into image
COPY . /usr/local/src/v2i-hub

# add symlink to resolve name discrepency ('libmysqlclient' != 'libmysqlclient_r')
# not sure where the name mismatch came from, but it seems to work

RUN ln -s /usr/lib/x86_64-linux-gnu/libmysqlclient.so /usr/lib/x86_64-linux-gnu/libmysqlclient_r.so
#RUN ln -s /usr/lib/arm-linux-gnueabihf/libmysqlclient.so /usr/lib/arm-linux-gnueabihf/libmysqlclient_r.so

# compile mysql-connector
RUN cd /usr/local/src/v2i-hub/TMX-OAM/Externals/ && \
    tar xzf mysql-connector-c++-1.1.3.tar.gz && \
    cd mysql-connector-c++-1.1.3 && \
    cmake . && \
    make && \
    make install

# compile mysql-J2735
RUN cd /usr/local/src/v2i-hub/TMX-OAM/Externals/ && \
    tar xzf asn_j2735_r41.tar.gz && \
    cd asn_j2735_r41 && \
    cmake . && \
    make && \
    make install

# compile TmxUtils
RUN cd /usr/local/src/v2i-hub/TMX/Core/TmxUtils && \
    mkdir build && \
    cd build && \
    cmake .. && \
    make

# compile TmxApi
RUN cd /usr/local/src/v2i-hub/TMX/Core/TmxApi && \
    mkdir build && \
    cd build && \
    cmake .. && \
    make

# compile TmxCore
RUN cd /usr/local/src/v2i-hub/TMX/Core/TmxCore && \
    mkdir build && \
    cd build && \
    cmake .. && \
    make

## compile AradaReceiverPlugin
#RUN cd /usr/local/src/v2i-hub/TMX/Plugins/AradaReceiverPlugin && \
#    mkdir build && \
#    cd build && \
#    cmake .. && \
#    make && \
#    make plugin

# broken, see https://www.itsforge.net/index.php/forum/v2i-hub-issue-tracker/99-aradareceiverplugin-fatal-error-wave-h-no-such-file-or-directory#173

# compile CswPlugin
RUN cd /usr/local/src/v2i-hub/TMX/Plugins/CswPlugin && \
    mkdir build && \
    cd build && \
    cmake .. && \
    make && \
    make plugin

# compile DmsPlugin
RUN cd /usr/local/src/v2i-hub/TMX/Plugins/DmsPlugin && \
    mkdir build && \
    cd build && \
    cmake .. && \
    make && \
    make plugin

# compile DsrcImmediateForwardPlugin
RUN cd /usr/local/src/v2i-hub/TMX/Plugins/DsrcImmediateForwardPlugin && \
    mkdir build && \
    cd build && \
    cmake .. && \
    make && \
    make plugin

# compile LocationPlugin
RUN cd /usr/local/src/v2i-hub/TMX/Plugins/LocationPlugin && \
    mkdir build && \
    cd build && \
    cmake .. && \
    make && \
    make plugin

# compile MapPlugin
RUN cd /usr/local/src/v2i-hub/TMX/Plugins/MapPlugin && \
    mkdir build && \
    cd build && \
    cmake .. && \
    make && \
    make plugin

# compile RtcmPlugin
RUN cd /usr/local/src/v2i-hub/TMX/Plugins/RtcmPlugin && \
    mkdir build && \
    cd build && \
    cmake .. && \
    make && \
    make plugin

# compile SpatPlugin
RUN cd /usr/local/src/v2i-hub/TMX/Plugins/AradaReceiverPlugin && \
    mkdir build && \
    cd build && \
    cmake .. && \
    make

# compile UtcPlugin
RUN cd /usr/local/src/v2i-hub/TMX/Plugins/UtcPlugin && \
    mkdir build && \
    cd build && \
    cmake .. && \
    make && \
    make plugin
