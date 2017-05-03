#!/usr/bin/env bash
ORIG=$(pwd)
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

if [ ! -d $DIR/TMX-OAM/Externals/mysql-connector-c++-1.1.3 ]; then
    cd $DIR/TMX-OAM/Externals/ && \
        tar xzf mysql-connector-c++-1.1.3.tar.gz && \
        cd mysql-connector-c++-1.1.3 && \
        cmake . && \
        make && \
        make install
else
    echo $DIR/TMX-OAM/Externals/mysql-connector-c++-1.1.3/ exists, assuming mysql-connector is already built
fi

if [ ! -d $DIR/TMX-OAM/Externals/asn_j2735_r41 ]; then
    cd $DIR/TMX-OAM/Externals/ && \
        tar xzf asn_j2735_r41.tar.gz && \
        cd asn_j2735_r41 && \
        cmake . && \
        make && \
        make install
else
    echo $DIR/TMX-OAM/Externals/asn_j2735_r41/ exists, assuming asn_j2735_r41 is already built
fi

# compile TmxUtils
if [ ! -d $DIR/TMX/Core/TmxUtils/Debug ]; then
    cd $DIR/TMX/Core/TmxUtils && \
        mkdir Debug && \
        cd Debug && \
        cmake .. && \
        make
else
    echo $DIR/TMX/Core/TmxUtils/Debug/ exists, assuming TmxUtils is already built
fi

# compile TmxApi
if [ ! -f $DIR/TMX/Core/TmxApi/libtmxapi.so ]; then
    cd $DIR/TMX/Core/TmxApi && \
        cmake . && \
        make
else
    echo $DIR/TMX/Core/TmxApi/libtmxapi.so exists, assuming TmxApi is already built
fi

# compile TmxCore
if [ ! -d $DIR/TMX/Core/TmxCore/build ]; then
    cd $DIR/TMX/Core/TmxCore && \
        mkdir build && \
        cd build && \
        cmake .. && \
        make
else
    echo $DIR/TMX/Core/TmxCore/build exists, assuming TmxCore is already built
fi

## compile AradaReceiverPlugin
#cd $DIR/TMX/Plugins/AradaReceiverPlugin && \
#    mkdir build && \
#    cd build && \
#    cmake .. && \
#    make && \
#    make package

# broken, see https://www.itsforge.net/index.php/forum/v2i-hub-issue-tracker/99-aradareceiverplugin-fatal-error-wave-h-no-such-file-or-directory#173

# compile CswPlugin
if [ ! -d $DIR/TMX/Plugins/CswPlugin/build ]; then
    cd $DIR/TMX/Plugins/CswPlugin && \
        mkdir build && \
        cd build && \
        cmake .. && \
        make && \
        make package
else
    echo $DIR/TMX/Plugins/CswPlugin/build exists, assuming CswPlugin is already built
fi

# compile DmsPlugin
if [ ! -d $DIR/TMX/Plugins/DmsPlugin/build ]; then
    cd $DIR/TMX/Plugins/DmsPlugin && \
        mkdir build && \
        cd build && \
        cmake .. && \
        make && \
        make package
else
    echo $DIR/TMX/Plugins/DmsPlugin/build exists, assuming DmsPlugin is already built
fi

# compile DsrcImmediateForwardPlugin
if [ ! -d $DIR/TMX/Plugins/DsrcImmediateForwardPlugin/build ]; then
    cd $DIR/TMX/Plugins/DsrcImmediateForwardPlugin && \
        mkdir build && \
        cd build && \
        cmake .. && \
        make && \
        make package
else
    echo $DIR/TMX/Plugins/DsrcImmediateForwardPlugin/build exists, assuming DsrcImmediateForwardPlugin is already built
fi

# compile LocationPlugin
if [ ! -d $DIR/TMX/Plugins/LocationPlugin/build ]; then
    cd $DIR/TMX/Plugins/LocationPlugin && \
        mkdir build && \
        cd build && \
        cmake .. && \
        make && \
        make package
else
    echo $DIR/TMX/Plugins/LocationPlugin/build exists, assuming LocationPlugin is already built
fi

# compile MapPlugin
if [ ! -d $DIR/TMX/Plugins/MapPlugin/build ]; then
    cd $DIR/TMX/Plugins/MapPlugin && \
        mkdir build && \
        cd build && \
        cmake .. && \
        make && \
        make package
else
    echo $DIR/TMX/Plugins/MapPlugin/build exists, assuming MapPlugin is already built
fi

# compile RtcmPlugin
if [ ! -d $DIR/TMX/Plugins/RtcmPlugin/build ]; then
    cd $DIR/TMX/Plugins/RtcmPlugin && \
        mkdir build && \
        cd build && \
        cmake .. && \
        make && \
        make package
else
    echo $DIR/TMX/Plugins/RtcmPlugin/build exists, assuming RtcmPlugin is already built
fi

# compile SpatPlugin
if [ ! -d $DIR/TMX/Plugins/SpatPlugin/build ]; then
    cd $DIR/TMX/Plugins/SpatPlugin && \
        mkdir build && \
        cd build && \
        cmake .. && \
        make
else
    echo $DIR/TMX/Plugins/SpatPlugin/build exists, assuming SpatPlugin is already built
fi

# compile UtcPlugin
if [ ! -d $DIR/TMX/Plugins/UtcPlugin/build ]; then
    cd $DIR/TMX/Plugins/UtcPlugin && \
        mkdir build && \
        cd build && \
        cmake .. && \
        make && \
        make package
else
    echo $DIR/TMX/Plugins/UtcPlugin/build exists, assuming UtcPlugin is already built
fi

cd $ORIG

