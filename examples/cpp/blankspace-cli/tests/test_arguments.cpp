#include "blankspace/arguments.hpp"

#include <cassert>

int main() {
    using blankspace::parse_arguments;
    auto args = parse_arguments({"--comments", "--keys", "kitty.conf"});
    assert(args.error.empty());
    assert(args.show_comments && args.show_keys);
    assert(args.file == "kitty.conf");

    assert(parse_arguments({"--help"}).help);
    assert(!parse_arguments({}).error.empty());
    assert(!parse_arguments({"--unknown", "file"}).error.empty());
    assert(!parse_arguments({"one", "two"}).error.empty());
    return 0;
}
