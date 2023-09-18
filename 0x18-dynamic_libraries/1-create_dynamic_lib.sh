#!/bin/bash
gcc -c -fpic *.c
gcc *.o -shared -o liball.so
sudo mv liball.so /usr/lib
