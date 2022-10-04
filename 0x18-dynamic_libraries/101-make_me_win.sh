#!/bin/bash
wget -P ../ https://github.com/ibukun21/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libfake.so
export LD_PRELOAD=../libfake.so
