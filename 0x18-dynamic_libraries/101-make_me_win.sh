#!/bin/bash
wget --continue --output-document=/tmp/jackpot.so https://github.com/ibukun21/alx-low_level_programming/raw/master/0x18-dynamic_libraries/jackpot.so
export LD_PRELOAD=/tmp/jackpot.so:$LD_PRELOAD
