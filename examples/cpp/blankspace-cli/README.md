# Blankspace CLI Inspector

A small C++20 terminal utility for inspecting text-based desktop configuration files. It reports non-empty lines, comments, and simple key-value assignments without modifying anything.

## Build

    cmake -S . -B build
    cmake --build build
    ./build/blankspace-inspect ../kitty/kitty.conf

## Usage

    blankspace-inspect [--comments] [--keys] <file>

The tool is read-only and intentionally avoids assuming every configuration format has identical syntax.