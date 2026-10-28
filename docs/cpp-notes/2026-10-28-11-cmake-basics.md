# CMake Basics

A minimal CMake project declares a minimum version, a project, and its build targets.

Prefer target-scoped settings such as target_compile_features and target_include_directories over broad global configuration. Keep build requirements close to the target they affect.