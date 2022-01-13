#!/bin/sh

set -ex

rm -rf main
gcc -lm -fno-math-errno -o main ./main.c
./main
