# Error Handling Practices

Error handling should make failure states explicit and keep successful paths easy to follow.

## Choosing a strategy

- Use exceptions for failures that prevent an operation from fulfilling its contract and are handled at a suitable boundary.
- Use return values such as `std::optional` when absence is an expected outcome.
- Use `std::expected` (C++23) when callers need a typed error value alongside a result.
- Validate external input at system boundaries.
- Avoid silently swallowing errors or returning ambiguous sentinel values.

## Example: expected absence

```cpp
#include <optional>
#include <string_view>

std::optional<int> parse_small_integer(std::string_view text);
```

A caller must handle the possibility that parsing did not produce a value.

## Review checklist

- Is the failure mode represented clearly in the function's return type or contract?
- Does the caller have enough information to respond?
- Are errors reported once, at the layer that can act on them?
- Are exceptional conditions kept distinct from normal control flow?
