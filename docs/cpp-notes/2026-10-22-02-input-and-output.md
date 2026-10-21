# Input and Output

Use `std::cout` to print and `std::cin` to read simple input.

```cpp
#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "You entered " << number << '\n';
}
```

`#include <iostream>` provides the standard stream objects.