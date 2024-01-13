#!/bin/sh
progdir=$(dirname "$0")/st
cd $progdir
HOME=$progdir
LD_PRELOAD=./j2k.so ./st.elf
sync
