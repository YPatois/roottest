#!/bin/bash -x

SRCPATH=`pwd`

rm -rf build
rm -rf local
rm -rf 
mkdir build
cd build
cmake -DCMAKE_INSTALL_PREFIX=${SRCPATH}/local ..
make -j3 install
cd $SRCPATH

rm -rf build *.h root-dict

strace -ff -o pure root -q -b CheckLoad.C
git restore DictExample.h DictLinkDef.h
