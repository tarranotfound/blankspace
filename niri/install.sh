#!/usr/bin/env bash
set -euo pipefail

SOURCE_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
TARGET_DIR="$HOME/.config/niri"
TARGET_FILE="$TARGET_DIR/config.kdl"
BACKUP_FILE="$TARGET_DIR/config.kdl.blankspace-backup"

mkdir -p "$TARGET_DIR"

if [[ -f "$TARGET_FILE" ]]; then
    cp "$TARGET_FILE" "$BACKUP_FILE"
    printf 'Backed up existing config to: %s
' "$BACKUP_FILE"
fi

cp "$SOURCE_DIR/config.kdl" "$TARGET_FILE"
printf 'Installed Blankspace Niri config to: %s
' "$TARGET_FILE"
printf 'Backup: %s
' "$BACKUP_FILE"
printf 'Review the configuration before starting or reloading Niri.
'
