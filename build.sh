#!/bin/sh
echo "Warning! Running this script on anything other than macOS will produce the wrong executable name"
gcc ttt.c -o build/ttt-darwin-x64
x86_64-w64-mingw32-gcc ttt.c -o build/ttt-windows-x64.exe
