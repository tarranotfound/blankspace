# C++ Basics: Files

Use std::ofstream to write a text file and std::ifstream to read one. Always check that the stream opened successfully before using it.

Example: std::ofstream output("notes.txt"); if (output) { output << "Hello file\n"; }
