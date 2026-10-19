#pragma once

#include <filesystem>
#include <string>
#include <vector>

namespace blankspace {
struct Arguments {
    std::filesystem::path file;
    bool show_comments{false};
    bool show_keys{false};
    bool help{false};
    std::string error;
};

Arguments parse_arguments(const std::vector<std::string>& args);
std::string usage(const char* program);
} // namespace blankspace
