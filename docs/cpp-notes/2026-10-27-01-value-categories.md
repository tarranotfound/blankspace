# C++ Value Categories

Expressions are commonly described as **lvalues** or **rvalues**. More precisely, C++ distinguishes lvalues, xvalues, and prvalues, grouped under glvalues and rvalues.

- An lvalue identifies an object or function.
- A prvalue computes a value or initializes an object.
- An xvalue denotes an object whose resources may be reused.

Value categories affect overload resolution and whether move operations can be selected.
