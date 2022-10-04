#!/bin/bash
wget -P ../ https://github.com/ibukun21/alx-low_level_programming/raw/master/0x18-dynamic_libraries/jackpot.so
export LD_PRELOAD=../jackpot.so
