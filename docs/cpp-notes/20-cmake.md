# C++ Basics: Minimal CMake

Example CMake configuration: cmake_minimum_required(VERSION 3.20); project(Example LANGUAGES CXX); add_executable(example main.cpp); target_compile_features(example PRIVATE cxx_std_20)

Configure with cmake -S . -B build, then build with cmake --build build.
