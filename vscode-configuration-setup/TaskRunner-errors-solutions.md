---
"tags": #configuration
---

- `error: invalid flag: F:\vault\CodeLab\princeton-algorithms-part1\Module` | `file or folder specified is not found or invalid`
  - task building invalid paths like `F:\vault\CodeLab\F:\vault\CodeLab\...` and a leading space in the command.
  - pass clean, workspace-relative paths in `args` property and use `cmd /c` properly in `tasks.json`