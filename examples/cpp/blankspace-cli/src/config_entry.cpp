#include "blankspace/config_entry.hpp"

#include <cctype>
#include <utility>

namespace blankspace {
std::string trim(std::string_view text) {
    std::size_t first = 0;
    while (first < text.size() &&
           std::isspace(static_cast<unsigned char>(text[first]))) {
        ++first;
    }
    std::size_t last = text.size();
    while (last > first &&
           std::isspace(static_cast<unsigned char>(text[last - 1]))) {
        --last;
    }
    return std::string(text.substr(first, last - first));
}

ConfigEntry parse_entry(std::string_view line, std::size_t line_number) {
    ConfigEntry entry;
    entry.line_number = line_number;
    entry.raw = std::string(line);
    entry.trimmed = trim(line);

    if (entry.trimmed.empty()) return entry;
    entry.comment = entry.trimmed.front() == '#' ||
                    entry.trimmed.front() == ';';
    if (entry.comment) return entry;

    const auto separator = entry.trimmed.find('=');
    if (separator == std::string::npos) return entry;

    auto key = trim(std::string_view(entry.trimmed).substr(0, separator));
    auto value = trim(std::string_view(entry.trimmed).substr(separator + 1));
    if (!key.empty()) {
        entry.key = std::move(key);
        entry.value = std::move(value);
    }
    return entry;
}
} // namespace blankspace
