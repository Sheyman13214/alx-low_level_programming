#/bin/bash
wget -p .. https://githubusercontent.com/Sheyman13214/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
