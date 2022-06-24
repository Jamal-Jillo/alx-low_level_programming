#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rcs liball.a *.o
nm liball.a

