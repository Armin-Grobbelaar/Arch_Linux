#!/bin/sh
if ! gputil=$(nvidia-smi --format=nounits,csv,noheader --query-gpu=utilization.gpu | xargs echo); then
    gputil=0
fi
if [ "$gputil" -gt 0 ]; then
    echo "$gputil%"
else
    echo "$no nvidia driver installed"
fi