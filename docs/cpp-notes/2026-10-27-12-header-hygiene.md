# Header Hygiene

A header should include the declarations it directly depends on instead of relying on another header to include them accidentally.

- Keep declarations and definitions organized.
- Use include guards or `#pragma once` consistently with project conventions.
- Avoid unnecessary includes in widely used headers.
- Prefer forward declarations when they are valid and materially reduce dependencies.
