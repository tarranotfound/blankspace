# Backup and Restore

Back up configuration before replacing it. A simple timestamped archive can preserve the current setup:

```bash
mkdir -p ~/.local/share/blankspace/backups
tar -czf ~/.local/share/blankspace/backups/configs-$(date +%Y%m%d-%H%M%S).tar.gz \
  ~/.config/hypr ~/.config/kitty ~/.config/fuzzel ~/.config/hyprlock \
  ~/.config/cava ~/.config/btop ~/.config/nvim 2>/dev/null
```

To restore, extract only the directories you need and review the resulting paths before overwriting active configs. Do not blindly restore a backup made for different hardware.