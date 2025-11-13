# Build & Run Configuration Guide

## 🚀 Quick Start - One-Click Build & Run

Your workspace is now configured for **automatic compilation** from any folder!

### Method 1: Keyboard Shortcuts (Fastest)

- **F5** - Build and run the current file (C or C++)
- **Ctrl+Shift+B** - Build and run the current file

### Method 2: Command Palette

1. Press `Ctrl+Shift+P`
2. Type "Run Task"
3. Select:
   - `C++: Build and Run Current File` 🚀 (for .cpp files)
   - `C: Build and Run Current File` 🚀 (for .c files)

### Method 3: Terminal Menu

1. Click `Terminal` → `Run Task...`
2. Select the appropriate task

---

## 📁 Project Structure

Your workspace supports multiple folders:

```
c++/c/
├── main.c                    # Main C project
├── main.cpp                  # Main C++ project
├── sort-algorithms/
│   └── quick-sort/
│       ├── main.cpp
│       └── compile_commands.json
└── .vscode/
    ├── tasks.json           # Build configurations
    ├── launch.json          # Debug configurations
    └── keybindings.json     # Keyboard shortcuts
```

---

## 🔧 Available Build Tasks

### For Current File (Works from ANY folder):

1. **C++: Build and Run Current File** 🚀
   - One-click compile and execute
   - Works wherever your .cpp file is located
   - Auto-creates executable in the same folder

2. **C: Build and Run Current File** 🚀
   - One-click compile and execute for C files
   - Works wherever your .c file is located

3. **C++: Build Current File**
   - Compile only (no run)

4. **C: Build Current File**
   - Compile only (no run)

### For Main Project Files:

5. **C++: Build Project** (default)
   - Builds main.cpp + Log.cpp → main.exe

6. **C: Build Project**
   - Builds main.c → main_c.exe

---

## 🐛 Debugging

### Debug Current File:

1. Open your .c or .cpp file
2. Press `F5` to run OR `Ctrl+Shift+D` → select configuration:
   - `C: Debug Current File`
   - `C++: Debug Current File`

### Debug Main Projects:

- `C: Debug Program` - debugs main_c.exe
- `C++: Debug Program` - debugs main.exe

---

## 📝 How It Works

### Variables Used:

- `${file}` - Full path to current active file
- `${fileDirname}` - Directory of current file
- `${fileBasenameNoExtension}` - Filename without extension
- `${workspaceFolder}` - Root workspace directory

### Output Files:

- **Current file builds**: Creates `filename.exe` in the same directory as the source
  - Example: `sort-algorithms/quick-sort/main.cpp` → `sort-algorithms/quick-sort/main.exe`

- **Project builds**:
  - C++ project: `main.exe`
  - C project: `main_c.exe`

---

## 🎯 Adding New Folders/Tasks

To add a new algorithm or project folder:

1. Create your directory structure:
   ```
   sort-algorithms/merge-sort/
   └── main.cpp
   ```

2. **No configuration needed!** Just use the "Build and Run Current File" task

3. (Optional) For IntelliSense, create `compile_commands.json`:
   ```json
   [
       {
           "directory": "C:/Users/tuoji/Desktop/Tuojian-PhD-Thesis/c++/c/sort-algorithms/merge-sort",
           "command": "C:/msys64/mingw64/bin/g++.exe -std=c++20 -Wall -Wextra -g main.cpp -o main.exe",
           "file": "C:/Users/tuoji/Desktop/Tuojian-PhD-Thesis/c++/c/sort-algorithms/merge-sort/main.cpp"
       }
   ]
   ```

---

## ⚙️ Compiler Settings

### C++ Flags:
- `-std=c++20` - C++20 standard
- `-Wall -Wextra` - All warnings enabled
- `-g` - Debug symbols included

### C Flags:
- `-std=c11` - C11 standard
- `-Wall -Wextra` - All warnings enabled
- `-g` - Debug symbols included

### Compiler Paths:
- C++: `C:\msys64\mingw64\bin\g++.exe`
- C: `C:\msys64\mingw64\bin\gcc.exe`
- Debugger: `C:\msys64\mingw64\bin\gdb.exe`

---

## 💡 Tips

1. **Always open the file you want to compile** - The tasks use the currently active file

2. **Check the terminal output** - Compilation errors and warnings appear there

3. **Executable location** - The .exe is created in the same folder as your source file

4. **Quick rebuild** - Just press F5 again to recompile and run

5. **Clean builds** - Delete .exe files manually if needed

---

## 🔍 Troubleshooting

### "Command not found" errors:
- Verify MSYS2/MinGW is installed at `C:\msys64\`
- Check compiler paths in `.vscode/tasks.json`

### IntelliSense not working:
- Create `compile_commands.json` in your project folder
- Check `.vscode/c_cpp_properties.json`

### Can't find executable:
- Check the terminal output for compilation errors
- Look in the same folder as your source file

---

## 🎓 Example Workflow

1. Open `sort-algorithms/quick-sort/main.cpp`
2. Press **F5**
3. ✅ Automatically compiles and runs!
4. Output appears in terminal
5. Executable saved as `sort-algorithms/quick-sort/main.exe`

That's it! No manual terminal commands needed! 🎉



