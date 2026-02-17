# Tasks-in-vscode
- Lots of tools exist to automate tasks like linting, building, packaging, testing, or deploying software systems.
- Tasks in VS Code can be configured to **run scripts and start processes** so that many of these existing tools can be used from within VS Code without having to enter a command line or write new code.
-  Workspace or folder specific tasks are configured from the `tasks.json` file in the `.vscode` folder for a workspace.
-  Extensions can also contribute tasks using a [Task Provider](https://code.visualstudio.com/api/extension-guides/task-provider)
- Run Build Task: `Ctrl+Shift+B`

>[!Tip]
 You can run your task through Quick Open (`Ctrl+P`) by typing `task`, Space and the command name.

## Custom Tasks
- Example configuration to execute custom script using tasks. `test.cmd` is a script in scripts folder in root directory.
    ```json
    {
        // See https://go.microsoft.com/fwlink/?LinkId=733558
        // for the documentation about the tasks.json format
        "version": "2.0.0",
        "tasks": [
            {
                "label": "Run tests",
                "type": "shell",
                "command": "./scripts/test.sh",
                "windows": {
                    "command": ".\\scripts\\test.cmd"
                },
                "group": "test",
                "presentation": {
                    "reveal": "always",
                    "panel": "new"
                }
            }
        ]
    }

    ```
- Check full [Documentation here](https://code.visualstudio.com/docs/debugtest/tasks#:~:text=%22off%22%0A%7D-,Custom%20tasks,-Not%20all%20tasks)

## schema
- **Command**: If a single command is provided, the task system passes the command as is to the underlying shell
- Review [tasks.json scheme](https://code.visualstudio.com/docs/reference/tasks-appendix)


## quoting or escaping in command
- **Powershell or bash**: If directory/ folder, **command** or **args** contain spaces then *single quotes* are used for escaping
    ```json
    {
        "label": "dir",
        "type": "shell",
        "command": "dir 'folder with spaces'"
    }
    ```
- A shell command like below will be executed in PowerShell as dir 'folder with spaces'
    ```json
    {
        "label": "dir",
        "type": "shell",
        "command": "dir",
        "args": ["folder with spaces"]
    }
    ```
- **Cmd.exe**: *Double quotes* are used.
  - Check [Windows quoting `cmd` rules](https://ss64.com/nt/syntax-esc.html) command and args configuration.

- If you want to **control how the argument is quoted**, the argument can be a literal specifying the value and a quoting style.
    ```json
    {
        "label": "dir",
        "type": "shell",
        "command": "dir",
        "args": [
            {
            "value": "folder with spaces",
            "quoting": "escape"
            }
        ]
    }
    ```

# Access task commands
-  task commands can be accessed using the Command Palette (`Ctrl+Shift+P`). You can filter on 'task' and can see the various task related commands.
-  ![](https://code.visualstudio.com/assets/docs/debugtest/tasks/command-palette.png)
---

# References
- https://code.visualstudio.com/docs/debugtest/tasks