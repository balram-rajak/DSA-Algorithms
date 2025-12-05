# MCP Quick Reference - VS Code Configuration

## Question: Can you access LangChain MCP?

**Answer: NO** ❌

The LangChain MCP server is **not currently available** in your environment.

### Currently Available MCP Servers:
✅ **GitHub MCP Server** - For GitHub repository interactions  
✅ **Playwright MCP Server** - For browser automation  
✅ **Blackbird MCP Server** - For additional integrations  

### To Add LangChain MCP:
You would need to install and configure it separately. Contact your system administrator or follow these steps:
1. Install the LangChain MCP server package
2. Add it to your MCP configuration
3. Restart your development environment

---

## How to Edit MCP Configuration in VS Code

### Quick Steps:

1. **Open VS Code Settings**
   - Press `Ctrl+Shift+P` (Windows/Linux) or `Cmd+Shift+P` (Mac)
   - Type: `Preferences: Open Settings (JSON)`
   - OR: Go to File → Preferences → Settings → Click the `{}` icon in the top right

2. **Add MCP Configuration**
   ```json
   {
     "mcp.servers": {
       "your-mcp-server": {
         "enabled": true,
         "command": "node",
         "args": ["/path/to/your/mcp/server"]
       }
     }
   }
   ```

3. **Workspace-Specific Settings** (Recommended for project-specific MCP)
   - Edit `.vscode/settings.json` in your project folder
   - Configuration applies only to this workspace

### Example MCP Configuration for This Project:

```json
{
  "cmake.configureOnOpen": true,
  "files.associations": {
    // ... existing file associations ...
  },
  
  // MCP Server Configuration (example)
  "mcp.servers": {
    "github-mcp-server": {
      "enabled": true,
      "description": "GitHub integration MCP server"
    }
  }
}
```

---

## Current MCP Configuration Location

- **System-wide MCP Config**: `/home/runner/work/_temp/mcp-server/mcp-config.json`
- **VS Code User Settings**: `~/.config/Code/User/settings.json` (or via Command Palette)
- **Workspace Settings**: `.vscode/settings.json` (in this repository)

---

## Testing MCP Access

To verify which MCP tools are available, check the tools you have access to in your development environment. The current system provides:
- Git and GitHub operations
- Browser automation
- File system operations
- Code analysis tools

For more detailed information, see the [MCP Configuration Guide](../MCP_CONFIGURATION_GUIDE.md).
