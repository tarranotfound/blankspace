# Translation Units and Linking

A translation unit is the result of preprocessing a source file and its included headers. The compiler translates units, and the linker combines object files and libraries.

Undefined references often indicate a missing definition or library at link time; duplicate symbol errors can indicate definitions emitted more than once.