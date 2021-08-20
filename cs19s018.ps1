#!/bin/bash

clear

gcc normalmatmul.c

valgrind --tool = cachegrind --I1=4096,4,64 --D1=4096,4,64 --LL=1048576,16,64 ./a.out 64

valgrind --tool = cachegrind --I1=4096,2,64 --D1=4096,2,64 --LL=1048576,16,64 ./a.out 64

valgrind --tool = cachegrind --I1=4096,4,64 --D1=4096,4,64 --LL=1048576,16,64 ./a.out 256

valgrind --tool = cachegrind --I1=4096,2,64 --D1=4096,2,64 --LL=1048576,16,64 ./a.out 256

valgrind --tool = cachegrind --I1=65536,2,64 --D1=65536,2,64 --LL=1048576,16,64 ./a.out 64

valgrind --tool = cachegrind --I1=4096,2,128 --D1=4096,2,128 --LL=1048576,16,64 ./a.out 256

gcc blockedmatmul.c

valgrind --tool = cachegrind --I1=4096,4,64 --D1=4096,4,64 --LL=1048576,16,64 ./a.out 64 8

valgrind --tool = cachegrind --I1=4096,4,64 --D1=4096,4,64 --LL=1048576,16,64 ./a.out 256 8

~
~
~


