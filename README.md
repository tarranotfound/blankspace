# BLANKSPACE

> **A clean black & white Hyprland rice.**
>
> Minimal, monochrome, and focused on keeping the desktop simple.

![Blankspace](2026-09-08_20-19-12.png)

## ✦ About

**Blankspace** is my personal Hyprland rice for Arch Linux and one of my open-source learning projects.

The idea is simple: **black, white, clean, and distraction-free**. Every component can be used separately or together as a complete rice.

## 🧩 Components

- **Hyprland** — window manager and keybinds
- **Kitty** — terminal
- **Fuzzel** — application launcher
- **Hyprlock** — lock screen + calendar script
- **Noctalia** — desktop components / wallpaper environment
- **Vibe** — visual/background component
- **Cava** — audio visualizer config
- **btop** — system monitor with a white/green theme

## 🎨 Style

- Black & white aesthetic with soft green accents
- Minimal UI
- Clean and sharp layout
- No unnecessary visual effects
- Terminal-focused workflow
- Lightweight and easy to customize

## 📁 Structure

```text
blankspace/
├── btop/                 # btop config and Blankspace theme
├── cava/                 # Cava config
├── fuzzel/               # Fuzzel launcher + theme
├── hyprland/             # Hyprland Lua config
├── hyprlock/             # Hyprlock config + calendar script
├── kitty/                # Kitty terminal + colors
├── noctalia/             # Noctalia config + palette
├── vibe/                 # Vibe config + output config
├── README.md
├── LICENSE
└── CONTRIBUTING.md
```

## ⚡ Installation

### 1. Clone

```bash
git clone https://github.com/tarranotfound/blankspace.git
cd blankspace
```

### 2. Back up your current configs

```bash
mkdir -p ~/.config/blankspace-backup
cp -r ~/.config/hypr ~/.config/blankspace-backup/ 2>/dev/null || true
cp -r ~/.config/kitty ~/.config/blankspace-backup/ 2>/dev/null || true
cp -r ~/.config/fuzzel ~/.config/blankspace-backup/ 2>/dev/null || true
cp -r ~/.config/hyprlock ~/.config/blankspace-backup/ 2>/dev/null || true
cp -r ~/.config/noctalia ~/.config/blankspace-backup/ 2>/dev/null || true
cp -r ~/.config/vibe ~/.config/blankspace-backup/ 2>/dev/null || true
cp -r ~/.config/cava ~/.config/blankspace-backup/ 2>/dev/null || true
cp -r ~/.config/btop ~/.config/blankspace-backup/ 2>/dev/null || true
```

### 3. Install the components

```bash
cp -r hyprland ~/.config/hypr
cp -r kitty ~/.config/kitty
cp -r fuzzel ~/.config/fuzzel
cp -r hyprlock ~/.config/hyprlock
cp -r noctalia ~/.config/noctalia
cp -r vibe ~/.config/vibe
cp -r cava ~/.config/cava
cp -r btop ~/.config/btop
```

> You can install only the components you want. Review the configs first if your hardware or paths differ.

### 4. Dependencies

On Arch Linux, the main packages are:

```bash
sudo pacman -S git hyprland kitty fuzzel hyprlock cava btop
```

Noctalia and Vibe may be installed separately depending on the version and installation method you use.

### 5. Fonts

The rice uses:

- **JetBrains Mono Nerd Font**
- **IMD Grotesk**

Install JetBrains Mono Nerd Font on Arch with:

```bash
sudo pacman -S ttf-jetbrains-mono-nerd
```

Install IMD Grotesk separately if it is not already installed on your system.

### 6. Reload

After installing or changing the Hyprland configuration:

```bash
hyprctl reload
```

For other components, restart the relevant application or service.

## ⚠️ Hardware & Configuration Notes

Blankspace is a **personal rice, not a universal installer**.

Before using it on another machine, review:

- Monitor configuration
- Input devices
- Keybinds
- Wallpapers
- Application paths
- Hardware-specific settings
- Vibe output configuration
- btop theme and config paths

Some values are intentionally specific to the author's setup.

## 🤝 Contributing

Blankspace is an open-source learning project. Suggestions, criticism, and improvements are welcome.

See [CONTRIBUTING.md](CONTRIBUTING.md) before opening a pull request.

## 📸 Screenshots

The screenshot above shows the current Blankspace setup. More screenshots and configuration updates may be added as the rice evolves.

---

**Made while learning Linux, Hyprland, and dotfiles.**
