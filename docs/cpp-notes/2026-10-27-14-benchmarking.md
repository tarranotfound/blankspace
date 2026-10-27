# Benchmarking Basics

Measure before optimizing. Use representative inputs, repeat measurements, and compare builds under the same conditions.

Keep I/O and setup costs separate when they are not part of the operation being measured. Optimizing compilers may remove work whose results are unused, so benchmark harnesses should consume results and avoid relying on a single timing sample.
