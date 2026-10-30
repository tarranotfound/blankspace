# Error Handling Choices

Choose error handling based on the API contract: exceptions for exceptional failures, `std::optional` for absence, and an explicit result type when callers need structured error information.
