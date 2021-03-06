#!/usr/bin/env bash
ORIG=$(pwd)
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# compile TmxUtils
cd $DIR/TMX/Core/TmxUtils && \
    mkdir -p Debug && \
    cd Debug && \
    cmake .. && \
    make

# compile TmxApi
cd $DIR/TMX/Core/TmxApi && \
    cmake . && \
    make

# compile TmxCore
cd $DIR/TMX/Core/TmxCore && \
    mkdir -p build && \
    cd build && \
    cmake .. && \
    make

## compile AradaReceiverPlugin
#cd $DIR/TMX/Plugins/AradaReceiverPlugin && \
#    mkdir -p build && \
#    cd build && \
#    cmake .. && \
#    make && \
#    make package

# broken, see https://www.itsforge.net/index.php/forum/v2i-hub-issue-tracker/99-aradareceiverplugin-fatal-error-wave-h-no-such-file-or-directory#173

# compile CswPlugin
cd $DIR/TMX/Plugins/CswPlugin && \
    mkdir -p build && \
    cd build && \
    cmake .. && \
    make

# compile DmsPlugin
cd $DIR/TMX/Plugins/DmsPlugin && \
    mkdir -p build && \
    cd build && \
    cmake .. && \
    make

# compile DsrcImmediateForwardPlugin
cd $DIR/TMX/Plugins/DsrcImmediateForwardPlugin && \
    mkdir -p build && \
    cd build && \
    cmake .. && \
    make

# compile LocationPlugin
cd $DIR/TMX/Plugins/LocationPlugin && \
    mkdir -p build && \
    cd build && \
    cmake .. && \
    make

# compile MapPlugin
cd $DIR/TMX/Plugins/MapPlugin && \
    mkdir -p build && \
    cd build && \
    cmake .. && \
    make

# compile RtcmPlugin
cd $DIR/TMX/Plugins/RtcmPlugin && \
    mkdir -p build && \
    cd build && \
    cmake .. && \
    make

# compile SpatPlugin
cd $DIR/TMX/Plugins/SpatPlugin && \
    mkdir -p build && \
    cd build && \
    cmake .. && \
    make

# compile UtcPlugin
cd $DIR/TMX/Plugins/UtcPlugin && \
    mkdir -p build && \
    cd build && \
    cmake .. && \
    make

cd $ORIG

