# Release Checklist

Before publishing a Blankspace update:

- [ ] Test changed configs in a real session.
- [ ] Check shell scripts with `bash -n` where applicable.
- [ ] Run installer dry-run checks.
- [ ] Remove machine-specific paths when they are not intentional.
- [ ] Update README instructions if commands or dependencies changed.
- [ ] Review `git diff --check` for whitespace errors.
- [ ] Summarize user-visible changes in the commit message.