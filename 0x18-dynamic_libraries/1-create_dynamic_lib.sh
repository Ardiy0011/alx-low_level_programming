#!/bin/bash
gcc -c -fpic *.c
gcc -shared *.o -o libdynamic.so
