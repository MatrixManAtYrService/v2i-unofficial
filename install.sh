#!/usr/bin/env bash
ORIG=$(pwd)
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

if [ -d "$DIR/TMX-OAM/Externals/mysql-connector-c++-1.1.3/" ] ; then
    cd "$DIR/TMX-OAM/Externals/mysql-connector-c++-1.1.3" && make install
else
    echo $DIR/TMX-OAM/Externals/mysql-connector-c++-1.1.3 does not exist, run preinstall.sh
fi

if [ -d "$DIR/TMX-OAM/Externals/asn_j2735_r41/" ] ; then
    cd "$DIR/TMX-OAM/Externals/asn_j2735_r41" && make install
else
    echo $DIR/TMX-OAM/Externals/asj_j2735_r41 does not exist, run preinstall.sh
fi

cd $ORIG

