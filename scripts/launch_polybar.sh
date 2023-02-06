#!/bin/bash

# Terminate already running bar instances
killall -q polybar

# Wait until the processes have been shut down
#while pgrep -u $UID -x polybar >/dev/null; do sleep 1; done

# Launch Polybar, using default config location ~/.config/polybar/config
(sleep 0.5; polybar topbar_primary -r) &
(sleep 0.5; polybar topbar_secondary -r) &
#echo "Polybar launched..."
