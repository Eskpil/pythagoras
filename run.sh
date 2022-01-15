#!/bin/sh

set -ex

rm -rf main
gcc -o3 -lm -fno-math-errno -ggdb -o main ./main.c
./main
