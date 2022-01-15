#!/bin/sh

set -ex

rm -rf main
gcc -O0 -lm -fno-math-errno -ggdb -o main ./main.c
time ./main
