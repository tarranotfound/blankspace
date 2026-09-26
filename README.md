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
- **Neovim** — lightweight editor configuration

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
├── nvim/                 # Lightweight Neovim config
├── scripts/
│   ├── blankspace-setup          # Interactive installer
│   └── blankspace-setup-dry-run  # Installer checks without changes
├── vibe/                 # Vibe config + output config
├── README.md
├── LICENSE
└── CONTRIBUTING.md
```

## ⚡ Installation

### Option 1 — Setup installer

The recommended method is the interactive terminal installer:

```bash
./scripts/blankspace-setup
```

The installer lets you select individual components, validates that the selected package names are available to `pacman`, installs them, creates a timestamped config backup, and deploys the matching configs.

The installer accepts one option at a time. Extra arguments are rejected instead of being silently ignored.

To see the available components and their package/config mappings without starting the installer:

```bash
./scripts/blankspace-setup --list
```

You can also check the installer version:

```bash
./scripts/blankspace-setup --version
```

Before deployment it automatically creates a timestamped backup under:

```text
~/.local/share/blankspace/backups/
```

If deployment fails, the installer attempts to restore the previous configs from that backup. Configs that did not exist before deployment are removed during rollback.

> Review the configs first if your hardware, paths, or installed applications differ from the author's setup.

> **Note:** Noctalia and Vibe may not be available from the standard Arch repositories. The installer validates the package names before installation, so install those components separately when your chosen installation method does not provide them through `pacman`.

### Option 2 — Dry run

To inspect the installer requirements and repository layout without installing, backing up, or deploying anything:

```bash
./scripts/blankspace-setup-dry-run
```

Show the available dry-run options with:

```bash
./scripts/blankspace-setup-dry-run --help
```

The dry-run also rejects unknown or extra arguments and exits non-zero when required commands or repository components are missing.

### Option 3 — Manual installation

Clone the repository:

```bash
git clone https://github.com/tarranotfound/blankspace.git
cd blankspace
```

Back up your current configs before manually copying anything:

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
cp -r ~/.config/nvim ~/.config/blankspace-backup/ 2>/dev/null || true
```

Then copy the components you want:

```bash
cp -r hyprland ~/.config/hypr
cp -r kitty ~/.config/kitty
cp -r fuzzel ~/.config/fuzzel
cp -r hyprlock ~/.config/hyprlock
cp -r noctalia ~/.config/noctalia
cp -r vibe ~/.config/vibe
cp -r cava ~/.config/cava
cp -r btop ~/.config/btop
cp -r nvim ~/.config/nvim
```

## 📦 Dependencies

On Arch Linux, the main packages are:

```bash
sudo pacman -S git hyprland kitty fuzzel hyprlock cava btop neovim
```

The setup installer also requires `gum` for its terminal menu and can offer to install it when missing.

Noctalia and Vibe may be installed separately depending on the version and installation method you use.

## 🔤 Fonts

The rice uses:

- **JetBrains Mono Nerd Font**
- **IMD Grotesk**

Install JetBrains Mono Nerd Font on Arch with:

```bash
sudo pacman -S ttf-jetbrains-mono-nerd
```

Install IMD Grotesk separately if it is not already installed on your system.

## 🔄 Reload

After installing or changing the Hyprland configuration:

```bash
hyprctl reload
```

For other components, restart the relevant application or service.

## ⚠️ Hardware & Configuration Notes

Blankspace is a **personal rice, not a universal configuration**.

Before using it on another machine, review:

- Monitor configuration
- Input devices
- Keybinds
- Wallpapers
- Application paths
- Hardware-specific settings
- Vibe output configuration
- btop theme and config paths
- Neovim configuration and keymaps

Some values are intentionally specific to the author's setup.

## 🤝 Contributing

Blankspace is an open-source learning project. Suggestions, criticism, and improvements are welcome.

See [CONTRIBUTING.md](CONTRIBUTING.md) before opening a pull request.

## 📸 Screenshots

The screenshot above shows the current Blankspace setup. More screenshots and configuration updates may be added as the rice evolves.

---

**Made while learning Linux, Hyprland, and dotfiles.**


### Maintenance note
Blankspace keeps component configuration separate so individual parts can be enabled or replaced without changing the rest of the rice.


### Visual direction
The interface favors sharp geometry, high contrast, and restrained accent colors rather than heavy effects.
