# Blankspace Neovim

A lightweight Neovim configuration made to match the **Blankspace** aesthetic.

## ✦ Style

- Black and white base
- Soft green accents
- Minimal UI
- Native Lua configuration
- No plugin manager required
- Lightweight and easy to extend

## 📁 Structure

```text
nvim/
├── init.lua
├── lua/
│   └── blankspace/
│       ├── options.lua
│       ├── keymaps.lua
│       └── colors.lua
└── README.md
```

## ⚡ Installation

Back up your existing Neovim configuration first:

```bash
mv ~/.config/nvim ~/.config/nvim.backup
```

Clone Blankspace and copy the Neovim config:

```bash
git clone https://github.com/tarranotfound/blankspace.git
cp -r blankspace/nvim ~/.config/nvim
```

Start Neovim:

```bash
nvim
```

## ⌨️ Keymaps

Leader key: `Space`

| Key | Action |
| --- | --- |
| `<Space>w` | Save |
| `<Space>q` | Quit |
| `<Space>x` | Close buffer |
| `<Space>h` | Window left |
| `<Space>j` | Window down |
| `<Space>k` | Window up |
| `<Space>l` | Window right |
| `<Esc>` | Clear search highlight |

## 🧩 Dependencies

The configuration does not require external plugins. It uses Neovim's built-in Lua API.

Neovim 0.9+ is recommended.

## 🎨 Customization

Edit the files inside `nvim/lua/blankspace/` to change options, keymaps, or colors.
