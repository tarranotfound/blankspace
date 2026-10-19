#include "blankspace/arguments.hpp"
#include "blankspace/config_scanner.hpp"
#include "blankspace/report.hpp"

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
    std::vector<std::string> raw_args;
    for (int i = 1; i < argc; ++i) raw_args.emplace_back(argv[i]);

    const auto args = blankspace::parse_arguments(raw_args);
    if (args.help) {
        std::cout << blankspace::usage(argv[0]);
        return 0;
    }
    if (!args.error.empty()) {
        std::cerr << "error: " << args.error << '\n'
                  << blankspace::usage(argv[0]);
        return 2;
    }

    const auto result = blankspace::scan_file(args.file);
    if (!result.ok) {
        std::cerr << "error: " << result.error << '\n';
        return 1;
    }
    blankspace::print_report(result, args.show_comments, args.show_keys,
                             std::cout);
    return 0;
}
