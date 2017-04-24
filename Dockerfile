FROM ubuntu:16.04

MAINTAINER M@ Rixman (MatrixManAtYrService on github)

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

# add symlink
RUN ln -s /usr/lib/x86_64-linux-gnu/libmysqlclient.so /usr/lib/x86_64-linux-gnu/libmysqlclient_r.so

# compile mysql-connector
RUN cd /usr/local/src/v2i-hub/TMX-OAM/Externals/ && \
    tar xzf mysql-connector-c++-1.1.3.tar.gz && \
    cd mysql-connector-c++-1.1.3 && \
    cmake . && \
    make && \
    make install && \
    cd .. && \
    rm -rf mysql-connector-c++-1.1.3

# compile J2735
RUN cd /usr/local/src/v2i-hub/TMX-OAM/Externals/ && \
    alias sudo='' && \
    ./setupAsnJ2735_r41.sh

# compile TmxUtils
RUN cd /usr/local/src/v2i-hub/TMX/Core/TmxUtils && \
    cmake . && \
    make

# compile TmxApi
RUN cd /usr/local/src/v2i-hub/TMX/Core/TmxApi && \
    cmake . && \
    make

# compile TmxCore
RUN cd /usr/local/src/v2i-hub/TMX/Core/TmxCore && \
    cmake . && \
    make
