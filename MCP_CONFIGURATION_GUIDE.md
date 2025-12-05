# MCP (Model Context Protocol) Configuration Guide

## Overview
This guide provides information about configuring MCP servers in Visual Studio Code and checking available MCP servers.

## Available MCP Servers

Currently, the following MCP servers are available in your environment:

### 1. GitHub MCP Server
- **Purpose**: Provides tools to interact with GitHub repositories
- **Available Tools**:
  - Repository management (list branches, commits, tags, releases)
  - Issue and PR management
  - Workflow and job management
  - Code scanning and security alerts
  - Search functionality (code, issues, PRs, repositories, users)

### 2. Playwright MCP Server
- **Purpose**: Browser automation and web testing
- **Available Tools**:
  - Browser navigation and interaction
  - Screenshot and snapshot capabilities
  - Form filling and element interaction
  - Console and network monitoring

### 3. Blackbird MCP Server
- **Purpose**: Additional integration capabilities
- **Status**: Available but details not fully documented

## LangChain MCP Server Status

**Current Status**: ❌ **NOT AVAILABLE**

The LangChain MCP server is not currently configured or installed in your environment. The available MCP servers are:
- github-mcp-server
- playwright-mcp-server (browser automation)
- blackbird-mcp-server

If you need LangChain MCP capabilities, you would need to:
1. Install the LangChain MCP server package
2. Configure it in your MCP settings
3. Restart your development environment

## How to Edit MCP Configuration in VS Code

### Method 1: Using VS Code Settings UI
1. Open VS Code Command Palette (`Ctrl+Shift+P` or `Cmd+Shift+P` on Mac)
2. Type "Preferences: Open Settings (UI)"
3. Search for "MCP" in the settings search bar
4. Configure MCP-related settings

### Method 2: Editing settings.json Directly
1. Open Command Palette (`Ctrl+Shift+P` or `Cmd+Shift+P`)
2. Type "Preferences: Open User Settings (JSON)"
3. Add MCP configuration:

```json
{
  "mcp.servers": {
    "github-mcp-server": {
      "enabled": true,
      "command": "node",
      "args": ["/path/to/github-mcp-server"]
    },
    "langchain-mcp-server": {
      "enabled": true,
      "command": "node",
      "args": ["/path/to/langchain-mcp-server"]
    }
  }
}
```

### Method 3: Workspace Settings
For project-specific MCP configuration:

1. Open your workspace folder in VS Code
2. Navigate to `.vscode/settings.json` in your project
3. Add MCP configuration specific to this project

## Current VS Code Configuration in This Repository

Your repository already has VS Code configuration in the `.vscode` directory:

### Existing Configuration Files:
- **c_cpp_properties.json**: C/C++ IntelliSense configuration
- **settings.json**: Workspace settings (file associations, C++ settings, Java settings)
- **tasks.json**: Build and run tasks for C++ and Java code
- **launch.json**: Debugging configuration

### Example: Adding MCP Configuration
To add MCP configuration to your existing `.vscode/settings.json`:

```json
{
  "cmake.configureOnOpen": true,
  // ... existing settings ...
  
  // Add MCP configuration
  "mcp.servers": {
    "github-mcp-server": {
      "enabled": true
    }
  }
}
```

## Checking Available MCP Tools

To check which MCP tools are available in your current environment, you can:

1. **View MCP Configuration**: Check the MCP configuration file at:
   ```
   /home/runner/work/_temp/mcp-server/mcp-config.json
   ```

2. **List Available Tools**: MCP servers expose their available tools through their configuration

3. **Check Server Status**: Verify if MCP servers are running and accessible

## Common MCP Configuration Tasks

### Adding a New MCP Server
1. Install the MCP server package (npm, pip, etc.)
2. Add configuration to VS Code settings
3. Specify the server command and arguments
4. Enable the server
5. Restart VS Code

### Troubleshooting MCP Issues
- **Server Not Found**: Check if the server is installed and path is correct
- **Connection Issues**: Verify the server is running and accessible
- **Permission Errors**: Ensure proper file permissions for server executables

## Resources

- **MCP Specification**: https://spec.modelcontextprotocol.io/
- **GitHub MCP Server**: Part of GitHub's automation tools
- **VS Code Documentation**: Search for "MCP" in VS Code docs

## Next Steps

If you need to access LangChain MCP capabilities:
1. Identify the LangChain MCP server package you need
2. Install it in your environment
3. Configure it in your VS Code settings
4. Test the connection

## Summary

✅ **Available**: GitHub MCP, Playwright MCP, Blackbird MCP  
❌ **Not Available**: LangChain MCP  
📝 **Configuration Location**: `.vscode/settings.json` or User Settings

For any questions or issues with MCP configuration, refer to the official MCP documentation or your organization's development guidelines.
