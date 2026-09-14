# C Programming Core Utilities

A collection of lightweight, foundational C utilities demonstrating key programming concepts: conditional switch logic, modular array functions, and low-level pointer arithmetic.

## 📁 Repository Projects

### 1. Simple Calculator
A command-line tool executing basic arithmetic operations.
- **Source File:** `calculator.c`
- **Core Concept:** `switch-case` structural control flow.
- **Features:** Supports `+`, `-`, `*`, `/`. Includes edge-case filtering to prevent system crashes from **division by zero**.

### 2. Student Average Calculator
A modular software layout tracking academic scores across dynamically sized subject fields.
- **Source File:** `student_average.c`
- **Core Concept:** Multi-function parameters and standard arrays.
- **Features:** Segregates input routines (`getMarks`) from analytical logic (`calculateAverage`) for clean architecture.

### 3. Pointer-Based Word Counter
An efficient text scanner processing complete sentences into word metrics.
- **Source File:** `word_counter.c`
- **Core Concept:** Direct memory traversal using pointer arithmetic (`str++`).
- **Features:** State tracking flags isolate individual words and cleanly filter out multiple consecutive spaces, tabs, or newlines.

---

## 📋 Prerequisites
Ensure you have a standard C compiler configured on your machine:
- **GCC** (Linux/Mac)
- **MinGW / MSVC** (Windows)
- Alternately, any standard IDE (VS Code, Code::Blocks, Dev-C++)

---

## 💻 How to Compile and Run

1. **Clone the project repository:**
   ```bash
   git clone https://github.com
   cd YOUR_REPO_NAME
   ```

2. **Run the Simple Calculator:**
   ```bash
   gcc calculator.c -o calculator
   ./calculator
   ```

3. **Run the Student Average Calculator:**
   ```bash
   gcc student_average.c -o student_average
   ./student_average
   ```

4. **Run the Word Counter:**
   ```bash
   gcc word_counter.c -o word_counter
   ./word_counter
   ```

---

## 📄 License
This repository is completely open-source and free to distribute under the terms of the [MIT License](LICENSE).
