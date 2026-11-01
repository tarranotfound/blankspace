# C++ Testing Basics

Small, focused tests make behavior easier to verify and regressions easier to locate.

## A useful test structure

1. Arrange the inputs and initial state.
2. Act by calling the behavior under test.
3. Assert the observable result.

## What to test

- Typical valid inputs.
- Boundary values and empty inputs.
- Invalid input and documented failure behavior.
- State transitions and resource-lifetime behavior.
- Regression cases for previously fixed defects.

## Test design guidelines

- Keep each test focused on one behavior.
- Avoid depending on execution order or external network state.
- Prefer deterministic fixtures.
- Test public behavior rather than private implementation details.
- Give tests names that explain the expected behavior.

## Example assertion

```cpp
#include <cassert>

int clamp_to_zero(int value) {
    return value < 0 ? 0 : value;
}

int main() {
    assert(clamp_to_zero(5) == 5);
    assert(clamp_to_zero(0) == 0);
    assert(clamp_to_zero(-3) == 0);
}
```

For production projects, use the test framework and build-system conventions already adopted by the repository.
