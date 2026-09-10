# BLANKSPACE

> **A clean black & white Hyprland rice.**
>
> Minimal, monochrome, and focused on keeping the desktop simple.

![Blankspace](2026-09-08_20-19-12.png)

## ✦ About

**Blankspace** is my personal Hyprland rice for Arch Linux.

The idea behind Blankspace is the opposite of a busy desktop: **black, white, clean, and distraction-free**. It is built from simple configurations that can be used individually or together as a complete rice.

## 🎨 Style

- Black & white aesthetic
- Minimal UI
- Clean and sharp layout
- No unnecessary visual effects
- Terminal-focused workflow
- Lightweight and easy to customize

## 🧩 Components

- **Hyprland** — window manager
- **Kitty** — terminal
- **Fuzzel** — application launcher
- **Hyprlock** — lock screen
- **Noctalia** — desktop components / wallpaper environment
- **Vibe** — visual/background component

## 📁 Structure

```text
blankspace/
├── hyprland/      # Hyprland configuration
├── kitty/         # Kitty terminal configuration
├── fuzzel/        # Fuzzel launcher configuration
├── hyprlock/      # Hyprlock configuration
├── noctalia/      # Noctalia configuration
├── vibe/          # Vibe configuration
└── README.md
```

## ⚡ Installation

### 1. Clone the repository

```bash
git clone https://github.com/tarranotfound/blankspace.git
cd blankspace
```

### 2. Back up your existing configs

Before replacing any configuration, make a backup of the configs you currently use.

```bash
mkdir -p ~/.config/blankspace-backup

cp -r ~/.config/hypr ~/.config/blankspace-backup/ 2>/dev/null || true
cp -r ~/.config/kitty ~/.config/blankspace-backup/ 2>/dev/null || true
cp -r ~/.config/fuzzel ~/.config/blankspace-backup/ 2>/dev/null || true
cp -r ~/.config/hyprlock ~/.config/blankspace-backup/ 2>/dev/null || true
cp -r ~/.config/noctalia ~/.config/blankspace-backup/ 2>/dev/null || true
cp -r ~/.config/vibe ~/.config/blankspace-backup/ 2>/dev/null || true
```

### 3. Install the configurations

Copy the components you want to use:

```bash
cp -r hyprland ~/.config/hypr
cp -r kitty ~/.config/kitty
cp -r fuzzel ~/.config/fuzzel
cp -r hyprlock ~/.config/hyprlock
cp -r noctalia ~/.config/noctalia
cp -r vibe ~/.config/vibe
```

You can also install only individual components instead of using the complete rice.

### 4. Install dependencies

On Arch Linux, install the main packages with:

```bash
sudo pacman -S git hyprland kitty fuzzel hyprlock
```

Noctalia and Vibe may be installed separately depending on the version and installation method you use.

### 5. Fonts

Blankspace uses:

- **JetBrains Mono Nerd Font**
- **IMD Grotesk**

For JetBrains Mono Nerd Font on Arch:

```bash
sudo pacman -S ttf-jetbrains-mono-nerd
```

Make sure the other font is installed if it is referenced by your configuration.

### 6. Reload Hyprland

After installing the configuration, reload Hyprland:

```bash
hyprctl reload
```

For a completely fresh session, restart Hyprland instead.

## ⚠️ Hardware & Configuration Notes

Blankspace is a **personal rice**, not a universal installer.

Before using it on another machine, review:

- Monitor configuration
- Input devices
- Keybinds
- Wallpapers
- Application paths
- Hardware-specific settings

Some configuration values may need to be changed for your system.

## 🤝 Feedback

Blankspace is an open-source learning project. Suggestions, criticism, and improvements are welcome.

If you like the rice, consider giving the repository a ⭐.

## 📸 Screenshots

The screenshot above shows the current Blankspace setup.

More screenshots and configuration updates will be added as the rice evolves.

---

**Made while learning Linux, Hyprland, and dotfiles.**
