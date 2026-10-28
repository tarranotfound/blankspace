# Thread Safety Fundamentals

Concurrent access to shared mutable state requires synchronization. In C++, conflicting unsynchronized accesses can create a data race, which is undefined behavior.

Use mutexes, atomics, or designs that avoid shared mutation. Keep critical sections small and establish a consistent lock ordering to reduce deadlock risk.