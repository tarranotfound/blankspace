#include "blankspace/config_entry.hpp"

#include <cassert>

int main() {
    using blankspace::parse_entry;
    using blankspace::trim;

    assert(trim("  hello  ") == "hello");
    assert(trim("\t\n") == "");
    const auto comment = parse_entry("  # theme settings", 4);
    assert(comment.comment);
    assert(comment.line_number == 4);
    const auto assignment = parse_entry("border_size = 2", 8);
    assert(assignment.key && *assignment.key == "border_size");
    assert(assignment.value && *assignment.value == "2");
    const auto empty_value = parse_entry("wallpaper =   ", 9);
    assert(empty_value.key && *empty_value.key == "wallpaper");
    assert(empty_value.value && empty_value.value->empty());
    return 0;
}
