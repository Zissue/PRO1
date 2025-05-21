# Demo: Vector Normalization (p1-norm.cc)

This program reads a sequence of integers, finds the minimum value in the sequence, and then prints the sequence with each element having the minimum value subtracted from it (i.e., it normalizes the sequence relative to its minimum).

## Files
- `p1-norm.cc`: The C++ source code.
- `sample_input.txt`: A sample input file.

## How to Compile and Run

1.  **Navigate to the `demo` directory:**
    ```bash
    cd demo
    ```

2.  **Compile the C++ code:**
    You'll need a C++ compiler (like g++).
    ```bash
    g++ p1-norm.cc -o p1-norm.x
    ```

3.  **Run the compiled program with the sample input:**
    ```bash
    ./p1-norm.x < sample_input.txt
    ```

4.  **Expected Output:**
    The program will output the normalized sequence to standard output. For the `sample_input.txt` provided, the output will be:
    ```
    5 15 0 10 20
    ```
