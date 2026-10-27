# Error Handling Choices

Use exceptions for failures that cannot be handled locally when that matches the project's conventions. Use explicit result types or status values when callers are expected to branch on failure as part of normal control flow.

Whichever approach is chosen, document failure conditions and preserve useful context. Avoid silently swallowing errors.
