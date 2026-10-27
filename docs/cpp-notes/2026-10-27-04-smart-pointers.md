# Smart Pointer Selection

- `std::unique_ptr<T>` represents exclusive ownership.
- `std::shared_ptr<T>` shares ownership using a reference-counted control block.
- `std::weak_ptr<T>` observes a shared object without extending its lifetime.

Choose ownership semantics first. A raw pointer or reference is often appropriate for a non-owning parameter when nullability and lifetime are clear.
