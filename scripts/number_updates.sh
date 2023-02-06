#!/bin/sh
sudo paru -Syy &> /dev/null
sudo pacman -Qu | wc -l | tr -d '\n' && echo " - " | tr -d '\n' && paru -Qua | wc -l
