#include "blankspace/config_scanner.hpp"

#include <fstream>

namespace blankspace {
ScanResult scan_file(const std::filesystem::path& path) {
    ScanResult result;
    std::ifstream input(path);
    if (!input) {
        result.error = "cannot open file: " + path.string();
        return result;
    }

    std::string line;
    std::size_t number = 0;
    while (std::getline(input, line)) {
        result.entries.push_back(parse_entry(line, ++number));
    }
    if (input.bad()) {
        result.error = "error while reading file: " + path.string();
        result.entries.clear();
        return result;
    }
    result.ok = true;
    return result;
}
} // namespace blankspace
