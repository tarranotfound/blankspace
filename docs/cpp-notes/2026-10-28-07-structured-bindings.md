# Structured Bindings

Structured bindings give names to elements of supported tuple-like values and aggregates.

Use auto& [key, value] when modifying elements through a range loop, or const auto& [key, value] for read-only access without copying. Reference and value semantics matter.