#!/bin/sh
gcc ttt.c -o build/ttt
read -p "Press Enter to continue" </dev/tty
./build/ttt
