# Blankspace on Niri

Blankspace is a clean black-and-white rice with soft green accents. This directory contains the Niri version of Blankspace, kept separate from the existing Hyprland configuration.

## What is included

- Niri starter configuration
- Blankspace keybinds and minimal window-management settings
- Optional startup helper for Waybar and other components
- Preflight checker for required files and commands
- Notes for adapting the setup to different hardware

## Requirements

Install Niri and the applications you want to use, such as Kitty, Fuzzel, Waybar, Hyprlock, btop, Cava, Fastfetch, and Vibe.

You do not need every component. Review commands, monitor names, and input settings before applying the configuration.

## Installation

1. Back up your current Niri configuration.
2. Copy `config.kdl` into `~/.config/niri/config.kdl`.
3. Copy `startup.sh` into `~/.config/niri/startup.sh` if you want the optional startup helper.
4. Make the helper executable:

   ```bash
   chmod +x ~/.config/niri/startup.sh
   ```

5. Review monitor, input, keybind, and application settings.
6. Reload Niri or log in again.

This is a starter configuration, not a universal installer. Hardware, installed applications, and Niri versions may require adjustments.

## Preflight check

Run the checker from this directory before applying the configuration:

```bash
chmod +x check.sh
./check.sh
```

The checker reports whether Niri, the optional applications, `config.kdl`, and `startup.sh` are available. It does not modify your system.

## Startup helper

`startup.sh` checks whether optional commands exist before launching them. Missing applications are skipped so they do not block the session.

## Style

Blankspace on Niri keeps the monochrome identity while respecting Niri's scrolling-column workflow. Hyprland-specific settings are not copied directly because Niri uses its own configuration syntax and behavior.
