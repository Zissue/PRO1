# PRO1 Programming Problems & Solutions

## Introduction
This repository contains a collection of C++ solutions for programming problems from the PRO1 course at UPC FIB (Universitat Politècnica de Catalunya - Facultat d'Informàtica de Barcelona).

## Folder Structure

### Main Categories
*   **`pro1/S<number>/`** - Session-based problems (e.g., `S7`, `S8`, `S9`, `S10`, `S11`)
    - Contains solutions organized by course sessions
    - Each session typically covers specific topics or algorithms
    
*   **`pro1/p<number>/`** - Topic-based problems (e.g., `p1` through `p10`)
    - Problems grouped by topic or difficulty level
    - Each problem has its own subdirectory with the problem ID
    
*   **`pro1/controls<number>/`** - Control/Exam exercises
    - `controls1/`, `controls2/`, `controls3/` contain exam solutions
    - Organized by quarter and exam number (e.g., `16q1c1`, `17q2c1`)
    
*   **`pro1/conso<number>/`** - Consolidation exercises
    - `conso1/`, `conso2/`, `conso3/` contain practice problems
    - Each problem in its own directory with problem ID
    
*   **`pro1/TeoriaPro1/`** - Theoretical materials
    - Contains lecture slides (PDFs) and example code
    - Organized by course chapters (e.g., `PRO1-C3/`)
    
*   **`pro1/algorithms/`** - Algorithm implementations
    - Fundamental algorithms used throughout the course
    - Includes sorting, searching, and other common algorithms
    
*   **`pro1/random jutge/`** - Miscellaneous problems
    - Additional practice problems from Jutge.org platform

## How to Compile and Run

### Basic Compilation
Most solutions are single C++ files (e.g., `problem_name.cc`). You'll need a C++ compiler like g++.

```bash
# Compile a program
g++ problem_name.cc -o problem_name.x

# Run the program
./problem_name.x
```

### Working with Input/Output
Many problems expect input from standard input and produce output to standard output:

```bash
# Using input redirection
./problem_name.x < input_file.inp

# Using input and output redirection
./problem_name.x < input_file.inp > output_file.dat

# Interactive input
./problem_name.x
# (then type your input)
```

### Sample Input Files
Some problem directories contain sample input files (`.dat` or `.inp` files) for testing your solutions.

### Problem Statements
Each problem directory includes a `Problem.md` file with:
- A reverse-engineered description of what the problem asks for
- Input/output format specifications
- Algorithmic approach hints
- Reference to the official Jutge.org problem statement

**Note:** These problem descriptions are inferred from the solution code and may not be exact. For official problem statements, please refer to [Jutge.org](https://jutge.org/).

## Disclaimer
These are student solutions submitted for various assignments and exams. While they aim to be correct, they might not always represent the most optimal or polished approach. Use them as a reference or for learning purposes.

**Note:** This repository is for educational purposes. Please follow your institution's academic integrity policies when using these solutions.

## Demo Program

A simple demo program (`p1-norm.cc` from session S7) is available in the `demo` directory.
It includes a sample input file and its own [README_DEMO.md](demo/README_DEMO.md) with specific instructions on how to compile and run it.
This can serve as a quick example of how to work with the programs in this repository.

## Contributing

When adding new solutions to this repository:
1. Place them in the appropriate directory based on their category
2. Use the problem ID as the filename (e.g., `p12345.cc`)
3. Do not commit compiled executables (`.x`, `.out`, `.o` files)
4. Include sample input files if they help demonstrate the solution
5. Add comments to explain complex algorithms or logic

## Repository Maintenance

The repository includes a `.gitignore` file that excludes:
- Compiled executables (`.x`, `.out`, `.exe`)
- Object files (`.o`, `.obj`)
- Editor temporary files
- Build directories

This keeps the repository clean and focused on source code.
