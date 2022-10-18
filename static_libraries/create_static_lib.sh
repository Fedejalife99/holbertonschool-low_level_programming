#!bin/bash
gcc - *.c
ar -rcs liball.a *.c
ranlib liball.a
