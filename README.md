# blankspace
white and black rice

screenshots
![blankspace](2026-09-08_20-19-12.png)

## Components

- Hyprland
- Kitty
- Fuzzel
- Hyprlock
- Noctalia
- Vibe

## Requirements

- Arch Linux
- Hyprland
- Kitty
- Fuzzel
- Hyprlock
- util calendar
- IMD Grotesk
- JetBrains Mono Nerd Font

## Installation

> **Note:** Blankspace is a personal Hyprland rice made for Arch Linux. Some configuration may need to be adjusted depending on your hardware and installed packages.
 Requirements



### 1. Clone the repository

```bash
git clone https://github.com/tarranotfound/blankspace.git
cd blankspace
```

### 2. Back up your existing configuration

Before installing, back up your current configs:

```bash
mkdir -p ~/.config/blankspace-backup

cp -r ~/.config/hypr ~/.config/blankspace-backup/ 2>/dev/null
cp -r ~/.config/kitty ~/.config/blankspace-backup/ 2>/dev/null
cp -r ~/.config/fuzzel ~/.config/blankspace-backup/ 2>/dev/null
cp -r ~/.config/hyprlock ~/.config/blankspace-backup/ 2>/dev/null
cp -r ~/.config/waybar ~/.config/blankspace-backup/ 2>/dev/null
```

### 3. Install the configurations

Copy the configurations into `~/.config`:

```bash
cp -r hyprland ~/.config/hypr
cp -r kitty ~/.config/kitty
cp -r fuzzel ~/.config/fuzzel
cp -r hyprlock ~/.config/hyprlock
cp -r waybar ~/.config/waybar
```

If you also use the other components included in this repository, copy them as needed:

```bash
cp -r noctalia ~/.config/noctalia
cp -r vibe ~/.config/vibe
```

### 4. Install required packages

On Arch Linux, install the main dependencies with:

```bash
sudo pacman -S git hyprland kitty fuzzel hyprlock waybar
```

Additional components may require packages from the AUR or their respective upstream projects.

### 5. Fonts

Install the fonts required by the configuration.

For example, if using Nerd Fonts:

```bash
sudo pacman -S ttf-jetbrains-mono-nerd
```

Make sure the font names used in the configuration are installed on your system.

### 6. Restart Hyprland

After copying the configurations, restart your Hyprland session.

You can also reload Hyprland without logging out:

```bash
hyprctl reload
```

### Notes

This repository is primarily intended for my own setup.

Hardware-specific settings, monitor configuration, input devices, wallpapers, and application paths may need to be changed before using Blankspace on another machine.

**Always review the configuration before replacing your existing dotfiles.**


## Structure

hyprland/
kitty/
fuzzel/
hyprlock/
noctalia/
vibe/

## Notes

This is primarily my personal configuration.
Some paths and settings may need to be changed.
