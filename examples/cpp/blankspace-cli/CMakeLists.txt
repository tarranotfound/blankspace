cmake_minimum_required(VERSION 3.16)
project(blankspace_inspect LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(blankspace-inspect
    src/main.cpp
    src/arguments.cpp
    src/config_entry.cpp
    src/config_scanner.cpp
    src/report.cpp
)
target_include_directories(blankspace-inspect PRIVATE include)

include(CTest)
if(BUILD_TESTING)
    add_executable(test-config-entry tests/test_config_entry.cpp src/config_entry.cpp)
    target_include_directories(test-config-entry PRIVATE include)
    add_test(NAME config-entry COMMAND test-config-entry)

    add_executable(test-arguments tests/test_arguments.cpp src/arguments.cpp)
    target_include_directories(test-arguments PRIVATE include)
    add_test(NAME arguments COMMAND test-arguments)
endif()
