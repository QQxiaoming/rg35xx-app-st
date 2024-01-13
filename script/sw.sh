#!/bin/sh
progdir=`dirname "$0"`
case "$1" in
	1)
		rm -f $progdir/../Terminal.sh
		cp -f $progdir/终端.sh $progdir/../
		sync
		;;
	2)
		rm -f $progdir/../终端.sh
		cp -f $progdir/Terminal.sh $progdir/../
		sync
		;;
esac
