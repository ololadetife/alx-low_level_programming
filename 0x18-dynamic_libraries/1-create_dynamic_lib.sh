#!/bin/bash
gcc -c *.c
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
