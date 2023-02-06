#!/bin/bash

#Activate noise cancellation
#alsa_input.usb-SN0002_2K_Web_Camera_SN0002-02.mono-fallback
cd /home/armin/.local/bin
./rnnoise activate
./rnnoise activate
notify-send "RNNoise" "Noise Cancellation Activated!"
