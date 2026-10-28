# Include What You Use

Each source or header should include the declarations it directly uses, rather than depending on incidental transitive includes.

Explicit dependencies help code survive unrelated header changes. Keep public headers especially self-contained.