# Simple Calculator in C

A lightweight, beginner-friendly command-line calculator written in C that performs basic arithmetic operations using a `switch-case` structure.

## 🚀 Features
- **Basic Arithmetic:** Supports Addition (`+`), Subtraction (`-`), Multiplication (`*`), and Division (`/`).
- **Edge-Case Handling:** Built-in validation to prevent system crashes during **division by zero**.
- **Input Validation:** Gracefully handles invalid operator inputs using a `default` case catch-all.
- **Clean Structure:** Optimized and readable code using plain integers (`int`) for fast execution.

## 🛠️ How it Works
The program reads a character input for the operator and two integer operands from the user. It evaluates the operator using a C `switch` statement and routes the control to the corresponding mathematical case block.

## 📋 Prerequisites
To run this program, you need a C compiler installed on your system:
- **GCC** (Linux/Mac)
- **MinGW** or **MSVC** (Windows)
- Or any C IDE (like Code::Blocks, VS Code with C/C++ extension, or Dev-C++)

## 💻 How to Run

1. **Clone the repository:**
   ```bash
   git clone https://github.com
   cd YOUR_REPO_NAME
   ```

2. **Compile the code:**
   ```bash
   gcc main.c -o calculator
   ```

3. **Run the executable:**
   ```bash
   ./calculator
   ```

## 📸 Sample Output
```text
Enter operator (+, -, *, /): *
Enter two numbers: 6 7
Result: 42
```

## 📄 License
This project is open-source and available under the [MIT License](LICENSE).
