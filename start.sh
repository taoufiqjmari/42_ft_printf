#!/bin/sh

make re
make clean
echo
echo
echo
echo "--------------------------------------------------"
echo
gcc -Wall -Wextra -Werror main.c libftprintf.a
./a.out >> ft_return
cat -e ft_return
rm ft_return
echo
echo "--------------------------------------------------"
