# Compile and Run

With a compiler such as `g++`, compile a source file and then run the program.

```sh
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o main
./main
```

Warnings can reveal mistakes early. The source file must contain a valid `main` function.