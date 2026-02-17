# Debug-Cpp-program

1. Compile C++ program with `-g` flag
2. Example configuration to build C++ program with debug flag `-g` which binds the breakpoints.
   - This configuration has to be placed in `task.json` file.
    ```json
    {
            "label": "build C++ (debug)",
            "type": "shell",
            "command": "cmd",
            "args": [
                "/c",
                "g++.exe",
                "-std=c++14",
                "-g",
                "${workspaceFolder}\\lib\\TaskRunner.cpp",
                "-o",
                "${workspaceFolder}\\lib\\TaskRunner.exe"
            ],
            "group": "build",
            "problemMatcher": [
                "$gcc"
            ],
            "options": {
                "cwd": "${workspaceFolder}"
            }
        }
    ```
   - Check [[Tasks-in-vscode.md]] for more information about tasks and its schema.
    - GDB-based debugger (`cppdbg`) is used with `g++.exe`
    - `gcc` is used for `C` program and `g++` is used for `C++` program compilation 
   - >[!note]
    cppvsdbg (MSVC) is used with MinGW

3.Configure launch configuration to use this build task as prelaunch task.
- Example configuration for debug launch configuration for [[TaskRunner.cpp]]
    ```json
    {
            "name": "Debug TaskRunner",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}\\lib\\TaskRunner.exe",
            "args": [
                "F:\\vault\\CodeLab\\princeton-algorithms-part1\\Module 02 - Union-Find\\Percolation.java",
                "F:\\vault\\CodeLab\\princeton-algorithms-part1\\target",
                "F:\\vault\\CodeLab\\princeton-algorithms-part1\\inputf.in",
                "F:\\vault\\CodeLab\\princeton-algorithms-part1\\outputf.in"
            ],
            "cwd": "${workspaceFolder}",
            "stopAtEntry": false,
            "preLaunchTask": "build C++ (debug)",
            "MIMode": "gdb",
            "miDebuggerPath": "gdb.exe",
            "externalConsole": false,
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ]
        }
    ```
    Whenever the debugger is launched using this configuration, first the TaskRunner is build using the *preLaunchTask* and then the debugger is started.

---

# References
[[Debug-using-vscode]]



