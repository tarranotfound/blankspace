#pragma once

#include <cstddef>
#include <optional>
#include <string>
#include <string_view>

namespace blankspace {
struct ConfigEntry {
    std::size_t line_number{};
    std::string raw;
    std::string trimmed;
    bool comment{false};
    std::optional<std::string> key;
    std::optional<std::string> value;
};

std::string trim(std::string_view text);
ConfigEntry parse_entry(std::string_view line, std::size_t line_number);
} // namespace blankspace
