# Value Semantics in C++

Value semantics make ownership and lifetime easier to reason about. Prefer passing small, cheap-to-copy values directly, and use references when copying would be expensive or when a function must operate on the caller's object.

## Practical guidelines

- Pass read-only, potentially large objects by `const T&`.
- Return ordinary values when the function produces a result; modern C++ can elide many copies.
- Use move semantics when transferring a resource-owning object's state.
- Avoid adding `std::move` to a local return expression without a reason; it can prevent copy elision.
- Make ownership visible in APIs rather than relying on undocumented conventions.

## Example

```cpp
#include <string>
#include <string_view>

void print_name(std::string_view name);

std::string make_label(std::string_view prefix, int id) {
    return std::string{prefix} + "-" + std::to_string(id);
}
```

The view is non-owning, so its backing storage must outlive its use. The returned string owns its characters.

## Review checklist

- Is the lifetime of every non-owning reference clear?
- Does the API communicate whether it borrows or owns data?
- Is a copy actually expensive enough to justify a reference?
