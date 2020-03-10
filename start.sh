#!/bin/sh

make
make clean
echo
echo
echo
echo "--------------------------------------------------"
echo
gcc -Wall -Wextra -Werror main.c libftprintf.a && ./a.out
echo
echo "--------------------------------------------------"
