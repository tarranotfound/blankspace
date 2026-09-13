#!/usr/bin/env bash

# Optional Blankspace startup helpers for Niri.
# Missing applications are ignored so the session can still start.

run_if_available() {
    command -v "$1" >/dev/null 2>&1 || return 0
    "$@" >/dev/null 2>&1 &
}

# Optional bar
run_if_available waybar

# Optional wallpaper daemon; configure your wallpaper separately.
# run_if_available swww-daemon

# Optional system monitor terminal
# run_if_available kitty --hold btop

# Optional audio visualizer
# run_if_available cava
