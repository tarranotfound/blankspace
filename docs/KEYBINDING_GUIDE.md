# Keybinding Guide

Blankspace uses Hyprland for window management. Check the active configuration before relying on a shortcut, because bindings can differ between local setups.

## Find bindings

Search the Hyprland config for `bind`, `bindd`, and `bindl` entries:

```bash
grep -nE 'bind(d|l)?\s*=' ~/.config/hypr/hyprland.conf ~/.config/hypr/hyprland.lua 2>/dev/null
```

## Safe customization

- Keep frequently used actions easy to reach.
- Avoid assigning the same key combination to multiple actions.
- Test changes with `hyprctl reload`.
- Keep a backup before editing the active config.