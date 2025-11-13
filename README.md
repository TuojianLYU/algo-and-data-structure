# Algorithms and Data Structures

A comprehensive collection of algorithms and data structures implemented in C/C++, with full VSCode debugging and build support.

## 🗂️ Repository Structure

```
algo-and-data-structure/
├── .vscode/                  # Main workspace configurations
├── sort-algorithms/          # Sorting algorithm implementations
│   ├── .vscode/             # Sort-specific build/debug configs
│   ├── bubble-sort/
│   ├── insertion-sort/
│   └── quick-sort/
└── BUILD_INSTRUCTIONS.md    # Detailed build and debug guide
```

## 🚀 Quick Start

### Prerequisites
- VSCode
- MinGW-w64 GCC/G++ (installed at `C:\msys64\mingw64\`)
- GDB debugger

### Setup
1. Clone the repository:
   ```bash
   git clone https://github.com/TuojianLYU/algo-and-data-structure.git
   cd algo-and-data-structure
   ```

2. Open in VSCode:
   - **For sorting algorithms**: Open `sort-algorithms/` folder
   - **For other projects**: Open respective subfolder

3. Build and run:
   - Press `Ctrl+Shift+B` (Build and run)
   - Or press `F5` (Debug mode)

## 📚 Sorting Algorithms

### Implemented:
- ✅ **Bubble Sort** - O(n²) comparison-based sort
- ✅ **Insertion Sort** - O(n²) efficient for small datasets
- ✅ **Quick Sort** - O(n log n) divide-and-conquer algorithm

### Coming Soon:
- Merge Sort
- Heap Sort
- Counting Sort
- Radix Sort

## 🔧 Development

### Build Configuration
- **Standard**: C++20
- **Compiler**: GCC (MinGW-w64)
- **Flags**: `-std=c++20 -Wall -Wextra -g`

### Debug Configuration
- **Debugger**: GDB
- **Features**: Breakpoints, step-through, variable inspection
- **Key shortcuts**:
  - `F5` - Start debugging
  - `F10` - Step over
  - `F11` - Step into
  - `Shift+F5` - Stop debugging

### Adding New Algorithms

1. Create new folder:
   ```bash
   mkdir sort-algorithms/merge-sort
   cd sort-algorithms/merge-sort
   ```

2. Create `main.cpp`:
   ```cpp
   #include <iostream>
   #include <vector>
   using namespace std;

   void mergeSort(vector<int>& nums) {
       // Your implementation
   }

   int main() {
       vector<int> nums = {64, 34, 25, 12, 22, 11, 90};
       mergeSort(nums);
       for (auto n : nums) cout << n << " ";
       cout << endl;
       return 0;
   }
   ```

3. (Optional) Create `compile_commands.json` for IntelliSense:
   ```json
   [
       {
           "directory": "C:/path/to/sort-algorithms/merge-sort",
           "command": "g++ -std=c++20 -Wall -Wextra -g main.cpp -o main.exe",
           "file": "C:/path/to/sort-algorithms/merge-sort/main.cpp"
       }
   ]
   ```

4. Open file and press `Ctrl+Shift+B` to build!

## 📖 Documentation

- **[BUILD_INSTRUCTIONS.md](BUILD_INSTRUCTIONS.md)** - Complete build and debug guide
- Each algorithm folder contains implementation with comments

## 🎯 Features

- ✅ One-click build and run
- ✅ Visual debugging with breakpoints
- ✅ Full IntelliSense support
- ✅ Independent project structure
- ✅ Auto-detection of source files
- ✅ Clean separation of concerns

## 🤝 Contributing

Feel free to add new algorithms or improve existing implementations!

1. Fork the repository
2. Create your feature branch
3. Add your algorithm in appropriate folder
4. Commit your changes
5. Push and create a Pull Request

## 📝 License

This project is for educational purposes.

## 👤 Author

**Tuojian LYU**
- GitHub: [@TuojianLYU](https://github.com/TuojianLYU)

## 🌟 Acknowledgments

Part of PhD thesis research on algorithms and data structures.

---

**Note**: This repository is configured for Windows with MinGW. For Linux/Mac, adjust compiler paths in `.vscode/tasks.json` and `.vscode/launch.json`.

