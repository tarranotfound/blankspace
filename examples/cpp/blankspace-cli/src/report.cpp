#include "blankspace/report.hpp"

#include <ostream>

namespace blankspace {
void print_report(const ScanResult& result, bool show_comments,
                  bool show_keys, std::ostream& output) {
    if (!result.ok) {
        output << "error: " << result.error << '\n';
        return;
    }

    std::size_t non_empty = 0;
    std::size_t comments = 0;
    std::size_t assignments = 0;
    for (const auto& entry : result.entries) {
        if (entry.trimmed.empty()) continue;
        ++non_empty;
        if (entry.comment) {
            ++comments;
            if (show_comments)
                output << entry.line_number << ": " << entry.trimmed << '\n';
        } else if (entry.key && entry.value) {
            ++assignments;
            if (show_keys)
                output << entry.line_number << ": " << *entry.key << '\n';
        }
    }

    output << "Lines: " << result.entries.size() << '\n'
           << "Non-empty: " << non_empty << '\n'
           << "Comments: " << comments << '\n'
           << "Assignments: " << assignments << '\n';
}
} // namespace blankspace
