#!/bin/bash

# Re-compile to set dnenu colours from pywal
cd /home/armin/.dmenu/dmenu-5.0
sleep 1                                         #005577
sed -i '5 i [SchemeSelHighlight] = { "#ffc978", "#3e3f42" }, [SchemeNormHighlight] = { "#ffc978", "#222222" },' /home/armin/.cache/wal/colors-wal-dmenu.h
sudo make clean install

