#include "blankspace/arguments.hpp"

namespace blankspace {
Arguments parse_arguments(const std::vector<std::string>& args) {
    Arguments result;
    for (const auto& arg : args) {
        if (arg == "--help" || arg == "-h") {
            result.help = true;
        } else if (arg == "--comments") {
            result.show_comments = true;
        } else if (arg == "--keys") {
            result.show_keys = true;
        } else if (!arg.empty() && arg.front() == '-') {
            result.error = "unknown option: " + arg;
            return result;
        } else if (result.file.empty()) {
            result.file = arg;
        } else {
            result.error = "only one input file may be provided";
            return result;
        }
    }
    if (!result.help && result.file.empty()) {
        result.error = "missing input file";
    }
    return result;
}

std::string usage(const char* program) {
    return std::string("Usage: ") + program +
           " [--comments] [--keys] <file>\n"
           "       " + program + " --help\n";
}
} // namespace blankspace
