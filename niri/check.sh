#!/usr/bin/env bash

# Blankspace Niri preflight check.
# This script checks common dependencies and expected configuration paths.

set -u

missing=0

check_command() {
    if command -v "$1" >/dev/null 2>&1; then
        printf '[ok]      %s\n' "$1"
    else
        printf '[missing] %s\n' "$1"
        missing=$((missing + 1))
    fi
}

check_path() {
    if [ -e "$1" ]; then
        printf '[ok]      %s\n' "$1"
    else
        printf '[missing] %s\n' "$1"
        missing=$((missing + 1))
    fi
}

printf 'Blankspace Niri preflight check\n\n'

check_command niri
check_command kitty
check_command fuzzel
check_command waybar
check_command hyprlock

printf '\nConfiguration paths\n\n'
check_path "$HOME/.config/niri/config.kdl"
check_path "$HOME/.config/niri/startup.sh"

printf '\n'
if [ "$missing" -eq 0 ]; then
    printf 'All checked items are available.\n'
else
    printf '%s item(s) need attention.\n' "$missing"
fi

exit "$missing"
