vim.cmd([[highlight clear]])
vim.cmd([[set background=dark]])

local colors = {
  bg = "#0a0a0a",
  fg = "#f2f2f2",
  muted = "#8a8a8a",
  green = "#9cbd82",
  green_bright = "#b7d99b",
  line = "#1f1f1f",
}

local set = vim.api.nvim_set_hl

set(0, "Normal", { fg = colors.fg, bg = colors.bg })
set(0, "NormalFloat", { fg = colors.fg, bg = colors.bg })
set(0, "CursorLine", { bg = colors.line })
set(0, "CursorLineNr", { fg = colors.green_bright, bold = true })
set(0, "LineNr", { fg = colors.muted })
set(0, "SignColumn", { fg = colors.muted, bg = colors.bg })
set(0, "Visual", { fg = colors.bg, bg = colors.green })
set(0, "Search", { fg = colors.bg, bg = colors.green })
set(0, "IncSearch", { fg = colors.bg, bg = colors.green_bright })
set(0, "MatchParen", { fg = colors.green_bright, bold = true, underline = true })

set(0, "Comment", { fg = colors.muted, italic = true })
set(0, "Keyword", { fg = colors.green })
set(0, "Statement", { fg = colors.green })
set(0, "Function", { fg = colors.green_bright })
set(0, "Type", { fg = colors.green_bright })
set(0, "Constant", { fg = colors.fg })
set(0, "String", { fg = colors.green_bright })

set(0, "StatusLine", { fg = colors.fg, bg = colors.bg })
set(0, "StatusLineNC", { fg = colors.muted, bg = colors.bg })
set(0, "VertSplit", { fg = colors.line, bg = colors.bg })
set(0, "WinSeparator", { fg = colors.line, bg = colors.bg })
set(0, "Pmenu", { fg = colors.fg, bg = colors.line })
set(0, "PmenuSel", { fg = colors.bg, bg = colors.green })
