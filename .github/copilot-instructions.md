# DSA-Algorithms Copilot Instructions

## Project Overview
This is a competitive programming and algorithm practice workspace supporting **C++, Java, Python, and JavaScript**. Code is organized by topic (Arrays, Strings, Number Theory, etc.) and run through a custom TaskRunner system that handles compilation, execution, and timing automatically.

## Critical Workflow: Running Code

**Primary method (keyboard shortcut)**: `Ctrl + Shift + B`
- This triggers the default VS Code task: "TaskRunner to run CPP, Java, python, JS code"
- Automatically compiles the active file and runs it with I/O redirection
- Input: `inputf.in` at workspace root
- Output: `outputf.in` at workspace root
- Compiled artifacts: `target/` directory

**How TaskRunner works**:
```bash
TaskRunner <file> <output_dir> <input_file> <output_file>
# Example: TaskRunner "src/Practice_problems/Rough.cpp" "target" "inputf.in" "outputf.in"
```

The TaskRunner system:
1. Detects file type (.cpp, .java, .py, .js)
2. Compiles with optimizations (C++: `-O2 -std=c++17`, Java: `-Xms16m -Xmx16m`)
3. Redirects stdin from `inputf.in` and stdout to `outputf.in`
4. Measures execution time and prints it

## C++ Specific Conventions

### Headers and Imports
- **Preferred**: `#include <bits/stdc++.h>` (precompiled header available at `lib/bits/stdc++.h.gch`)
- **Fast compile alternative**: Use specific headers (`<iostream>`, `<vector>`, `<string>`) instead of `bits/stdc++.h`
- **Always include**: `using namespace std;`
- **Compiler flags**: `-std=c++17 -O2` (C++20 support available in TaskRunner.bat)

### Common Patterns from Codebase

**Input/Output Pattern**:
```cpp
int main() {
    int n;
    cin >> n;
    while(!cin.fail()) {
        vector<int> v;
        int temp;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            v.push_back(temp);
        }
        // Process and output
        cin >> n;
    }
}
```

**Print Helper Function** (seen in [Rough.cpp](src/Practice_problems/Rough.cpp)):
```cpp
void print(vector<int> v) {
    cout << "size:" << v.size() << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
```

**Stack-based Problems**: Use `stack<int>` for indices and circular array traversal with `i % n` pattern (see [Rough.cpp](src/Practice_problems/Rough.cpp) for next greater element implementations)

## Java Conventions
- Compiled to `target/` directory
- Memory-constrained JVM settings: `-Xms16m -Xmx16m -XX:+TieredCompilation`
- Timer wrapper available: `lib/balramlib/Timer.java`

## Python Conventions
- Uses `python3` interpreter
- No compilation step required

## File Organization

```
src/
├── Algorithmic_ToolBox/     # Coursera algorithm problems
├── Arrays/                  # Array manipulation problems
├── C++/                     # C++ language features & STL
│   └── STL/                 # Stack, Queue, Map, Set, Vector examples
├── Contests/                # Competition problems
│   └── Upsolve/            # Post-contest solutions
├── Practice_problems/       # General practice (use Rough.cpp for scratch work)
├── Strings/                 # String algorithms
└── Striver_A2Z_Sheet/      # Structured DSA learning path

target/                      # Compiled executables (.exe, .class)
lib/                         # Build system and utilities
  ├── TaskRunner.{bat,cpp,java,py}
  ├── Timer.{cpp,h}
  └── bits/stdc++.h.gch     # Precompiled header
```

## Development Patterns

### Creating New Solutions
1. Create file in appropriate category under `src/`
2. Use template structure (main with input loop, helper functions)
3. Test input goes in `inputf.in`
4. Run with `Ctrl + Shift + B`
5. Check output in `outputf.in`

### Debugging Strategy
- TaskRunner prints compilation and execution commands for transparency
- Execution time printed to stderr (visible in terminal)
- For detailed timing: Use `Timer.cpp` or `Timer.java` wrapper classes

### Competition Context
- `Rough.cpp` in Practice_problems is the scratch file for experimentation
- Contest problems go under `Contests/` with descriptive names (e.g., `2064A_Bromming_contest.cpp`)
- Upsolve solutions stored in `Contests/Upsolve/`

## When Creating New Code

- **Always** include the standard input/output redirection pattern for competitive programming
- Use `-O2` optimization-friendly code (avoid undefined behavior)
- Prefer `vector` over raw arrays for dynamic sizing
- For STL containers, import examples exist in `src/C++/STL/`
- Test with `inputf.in` before submitting

## DO NOT
- Modify TaskRunner executables without recompiling (`g++ -std=c++17 TaskRunner.cpp -o TaskRunner.exe`)
- Use absolute paths in code (TaskRunner handles path resolution)
- Assume input format - always check `inputf.in` for expected format
