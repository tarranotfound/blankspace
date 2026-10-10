# Font Setup

Blankspace uses a terminal-oriented visual style, so consistent font rendering matters.

## Check installed fonts

```bash
fc-match monospace
fc-match 'JetBrains Mono Nerd Font'
fc-list : family | sort -u
```

Install a monospace font that is available for your distribution, then restart terminal applications. Nerd Font glyphs are optional; if icons appear as empty squares, verify the selected font actually contains those glyphs.