#!/usr/bin/env bash

# Blankspace Niri preflight check.
# This script checks common dependencies and expected configuration paths.

set -u

missing=0

check_command() {
    if command -v "$1" >/dev/null 2>&1; then
        printf '[ok]      %s
' "$1"
    else
        printf '[missing] %s
' "$1"
        missing=$((missing + 1))
    fi
}

check_path() {
    if [ -e "$1" ]; then
        printf '[ok]      %s
' "$1"
    else
        printf '[missing] %s
' "$1"
        missing=$((missing + 1))
    fi
}

printf 'Blankspace Niri preflight check

'

check_command niri
check_command kitty
check_command fuzzel
check_command waybar
check_command hyprlock

printf '
Configuration paths

'
check_path "$HOME/.config/niri/config.kdl"
check_path "$HOME/.config/niri/startup.sh"

printf '
'
if [ "$missing" -eq 0 ]; then
    printf 'All checked items are available.
'
else
    printf '%s item(s) need attention.
' "$missing"
fi

exit "$missing"
