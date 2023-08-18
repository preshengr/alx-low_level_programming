# Project: 0x0F-function_pointers

## Description
This project is focused on exploring the concept of function pointers in C programming. It includes a collection of C files that demonstrate the use of function pointers to create flexible and dynamic code structures.

## Author
Author: Engr Precious

## Project Files

1. **0-print_name.c**: This file contains a function that takes a function pointer and a string as parameters and uses the provided function to print the string.

2. **1-array_iterator.c**: This file contains a function that iterates over an array using a function pointer to apply a given action on each element.

3. **2-int_index.c**: This file contains a function that searches for an integer in an array using a function pointer as a comparison function.

4. **3-main.c**: This file contains the main program for a simple calculator. It uses function pointers to dynamically select and execute arithmetic operations.
   - **3-op_functions.c**: This file contains the arithmetic operation functions for the calculator.
   - **3-get_op_func.c**: This file contains a function that returns the appropriate function pointer for the selected operation.
   - **3-calc.h**: This header file contains the function prototypes and structure definitions for the calculator program.

5. **100-main_opcodes.c**: This file contains a program that prints the opcodes of its own main function in hexadecimal format.

## Usage
To use the functions and programs from this project, follow these steps:

1. Compile the required source files using a C compiler.
   ```sh
   gcc -o program_name source_file.c
   ```

2. Run the compiled executable.
   ```sh
   ./program_name
   ```

3. Follow the on-screen instructions for each program's behavior.

## License
This project and its contents are licensed to ALX Holberton. You are free to use, modify, and distribute the code according to the terms of the license agreement.

## Acknowledgments
We would like to express our appreciation to Engr Precious for contributing to the development of this project.

---
