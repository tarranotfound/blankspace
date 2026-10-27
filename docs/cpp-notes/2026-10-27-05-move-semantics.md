# Move Semantics

Move operations allow a type to transfer resources instead of duplicating them. `std::move` does not move by itself; it casts an expression so overload resolution can select an rvalue-reference overload.

After moving from an object, rely only on the type's documented postcondition. Standard-library objects are generally valid but may hold an unspecified value.
