# RAII and Resource Management

Resource Acquisition Is Initialization (RAII) ties a resource's lifetime to an object's lifetime. When the object leaves scope, its destructor releases the resource, including when control flow exits early.

## Guidelines

- Prefer standard-library resource wrappers over manually paired acquire/release calls.
- Use `std::unique_ptr` for exclusive dynamic ownership.
- Use `std::shared_ptr` only when shared ownership is genuinely part of the design.
- Keep destructors non-throwing.
- Avoid owning raw pointers; use raw pointers and references to express non-owning access.

## Example

```cpp
#include <fstream>
#include <stdexcept>
#include <string>

std::string read_first_line(const std::string& path) {
    std::ifstream input{path};
    if (!input) {
        throw std::runtime_error{"unable to open file"};
    }

    std::string line;
    std::getline(input, line);
    return line;
}
```

The stream closes its file automatically when it leaves scope.

## Review checklist

- Is every acquired resource owned by an object with a clear lifetime?
- Are ownership transfers explicit?
- Can early returns safely release resources?
