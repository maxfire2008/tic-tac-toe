#!/bin/sh
echo "Warning! Running this script on anything other than macOS will produce the wrong executable name"
gcc ttt.c -o build/ttt-darwin-x64
read -p "Press Enter to continue" </dev/tty
./build/ttt-darwin-x64
