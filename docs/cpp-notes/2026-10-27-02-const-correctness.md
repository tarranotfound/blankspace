# Const Correctness

Use `const` to express that an object or view should not be modified through a particular name.

```cpp
void print(const std::string& text);
```

A const reference avoids copying while allowing the function to read the string. Constness is part of an interface contract; it does not automatically make every object reachable through a pointer immutable.
