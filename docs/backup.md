# Configuration Backups

The setup workflow creates timestamped backups before deployment under:

```text
~/.local/share/blankspace/backups/
```

Backups are intended to make experimentation reversible. Before manually copying individual components, create your own backup of the matching directory in `~/.config`.

Do not treat a backup as a substitute for checking whether a configuration is hardware-specific.
