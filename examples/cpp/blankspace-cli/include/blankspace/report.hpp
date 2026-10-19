#pragma once

#include "blankspace/config_scanner.hpp"

#include <iosfwd>

namespace blankspace {
void print_report(const ScanResult& result, bool show_comments,
                  bool show_keys, std::ostream& output);
} // namespace blankspace
