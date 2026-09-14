# C Programming Foundations

A collection of lightweight, beginner-friendly C programs showcasing core logical structures, modular functions, and arrays.

## 📁 Projects Included

### 1. Simple Calculator
A command-line calculator that performs basic arithmetic operations using a `switch-case` structure.
- **Location:** `calculator.c`
- **Features:** Supports `+`, `-`, `*`, `/`. Includes edge-case verification to prevent **division by zero**.

### 2. Student Average Calculator
A modular application that uses separate functions to gather user input and calculate a student's average marks.
- **Location:** `student_average.c`
- **Features:** Dynamically scales to any number of subjects using loops, basic arrays, and distinct helper functions.

---

## 🛠️ How It Works

### Calculator (`switch-case`):
The program parses a single character operator along with two numeric operands, using the execution jumps of a `switch` block to prevent long, messy chains of conditional logic.

### Student Average Calculator (`functions`):
This script breaks down execution into distinct scopes to keep clean separations of concern:
- `getMarks()`: Handles the array data collection.
- `calculateAverage()`: Accumulates data parameters and returns the mean calculation.

---

## 📋 Prerequisites
Ensure you have a standard C compiler configured on your workspace environment:
- **GCC** (Linux/Mac)
- **MinGW / MSVC** (Windows)
- Or any C-compatible IDE (VS Code, Code::Blocks, Dev-C++)

---

## 💻 How to Run

1. **Clone the repository:**
   ```bash
   git clone https://github.com
   cd YOUR_REPO_NAME
   ```

2. **To compile and run the Calculator:**
   ```bash
   gcc calculator.c -o calculator
   ./calculator
   ```

3. **To compile and run the Student Average Calculator:**
   ```bash
   gcc student_average.c -o student_average
   ./student_average
   ```

---

## 📄 License
This repository is open-source and free to use under the [MIT License](LICENSE).
