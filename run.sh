#!/bin/sh

set -ex

rm -rf main
gcc -lm -fno-math-errno -ggdb -o main ./main.c
./main
