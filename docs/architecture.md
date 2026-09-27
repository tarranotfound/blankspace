# Configuration Architecture

Blankspace is organized around independent application configurations instead of one monolithic setup.

The repository separates compositor, terminal, launcher, lock screen, shell, visual, audio, monitoring, and editor configuration. This makes it possible to test one part without replacing the rest of the desktop.

Scripts under `scripts/` provide the installation workflow while the component directories remain the source files being deployed.
