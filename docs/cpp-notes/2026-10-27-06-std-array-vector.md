# `std::array` and `std::vector`

Use `std::array<T, N>` for a fixed-size sequence whose extent is known at compile time. Use `std::vector<T>` when the sequence size may change at runtime.

Both provide contiguous storage and integrate with standard algorithms. A vector may reallocate as it grows, invalidating pointers, references, and iterators to its elements.
