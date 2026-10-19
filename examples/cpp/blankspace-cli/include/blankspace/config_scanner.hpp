#pragma once

#include "blankspace/config_entry.hpp"

#include <filesystem>
#include <string>
#include <vector>

namespace blankspace {
struct ScanResult {
    std::vector<ConfigEntry> entries;
    std::string error;
    bool ok{false};
};

ScanResult scan_file(const std::filesystem::path& path);
} // namespace blankspace
