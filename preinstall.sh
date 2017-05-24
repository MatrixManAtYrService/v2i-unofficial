#!/usr/bin/env bash
ORIG=$(pwd)
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

if [ ! -d $DIR/TMX-OAM/Externals/mysql-connector-c++-1.1.3 ] ; then
    cd $DIR/TMX-OAM/Externals/ && \
        tar xzf mysql-connector-c++-1.1.3.tar.gz && \
        cd mysql-connector-c++-1.1.3 && \
        cmake . && \
        make
fi

if [ ! -d $DIR/TMX-OAM/Externals/asn_j2735_r41 ] ; then
    cd $DIR/TMX-OAM/Externals/ && \
        tar xzf asn_j2735_r41.tar.gz && \
        cd asn_j2735_r41 && \
        cmake . && \
        make
fi

cd $ORIG

