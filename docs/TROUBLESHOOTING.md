# Troubleshooting

## Configuration does not reload

Run `hyprctl reload` and inspect the terminal output for parse errors.

## Application does not launch

Check that the executable is installed and that the command in the config matches its name:

```bash
command -v kitty fuzzel hyprlock cava btop nvim
```

## Appearance differs from screenshots

Review installed fonts, monitor scaling, wallpaper paths, and application versions. Personal dotfiles may include machine-specific values.

## Recover from a bad edit

Restore the file from your backup or the repository, then reload the affected component.