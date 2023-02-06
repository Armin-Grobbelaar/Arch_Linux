#!/bin/sh
weather=$(curl -s wttr.in/Johannesburg,SouthAfrica?format=2)

if [ $(echo "$weather" | grep -E "(Unknown|curl|HTML)" | wc -l) -gt 0 ]; then
    echo "WEATHER UNAVAILABLE"
else
    echo "$weather" | awk '{print $2" "$3}'
fi
