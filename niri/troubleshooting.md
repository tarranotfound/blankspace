# Blankspace Niri Troubleshooting

## Niri does not start

- Confirm that Niri is installed and available in `PATH`:

  ```bash
  command -v niri
  ```

- Check the configuration for syntax errors before starting a session.
- Keep a backup of your working configuration so you can restore it quickly.

## An application does not open

Check whether the command exists:

```bash
command -v kitty
command -v fuzzel
command -v waybar
command -v hyprlock
```

If a command is missing, install the application or change the relevant keybind in `config.kdl`.

## Startup helper does not run

Make the helper executable:

```bash
chmod +x ~/.config/niri/startup.sh
```

Run it manually to identify missing commands:

```bash
bash ~/.config/niri/startup.sh
```

The helper intentionally skips optional programs that are not installed.

## Keybind conflicts

Review `config.kdl` and `keybinds.md`. Change bindings that conflict with your keyboard layout, desktop workflow, or other applications.

## Hardware-specific settings

Monitor names, touchpad behavior, scaling, and application availability vary between systems. Treat this configuration as a starting point and adjust it before daily use.
