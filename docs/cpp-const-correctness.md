# Const-Correctness

Const-correct interfaces document which operations may change state. They also let callers use an object through read-only references without weakening the API.

## Guidelines

- Mark member functions `const` when they do not modify observable object state.
- Use `const T&` for read-only access to larger objects.
- Prefer immutable local variables when reassignment is unnecessary.
- Keep pointer constness precise: `const T*` prevents mutation of the pointed-to value, while `T* const` prevents reassignment of the pointer.
- Do not use `const_cast` to bypass a design problem.

## Example

```cpp
class Session {
public:
    explicit Session(int id) : id_{id} {}

    [[nodiscard]] int id() const noexcept {
        return id_;
    }

private:
    int id_;
};
```

## Review checklist

- Can read-only operations be marked `const`?
- Are returned references safe for the caller to retain?
- Does the type expose mutation only where it is needed?
