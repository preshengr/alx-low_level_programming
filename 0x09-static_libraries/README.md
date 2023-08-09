# 0x09-Static Libraries

Welcome to the **0x09-Static Libraries** project! This repository explores the concept of Static Libraries in the realm of C programming. Static libraries are collections of precompiled functions that can be linked with a program during the compilation process.

## Task List

1. `_putchar.c`: This source file contains the implementation of the `_putchar` function, which is used to print a single character to the standard output.

2. `libmy.a`: This static library file includes various precompiled functions. More details about the functions can be found in the source code files.

3. `main.h`: This header file encompasses function prototypes and any necessary macros for the functions that are implemented in this project.

## Ownership and Usage

All files within this repository are the original creations of the repository owner.

## License

This project is licensed under the authority of ALX - Holberton School.

## Usage

Feel free to explore the code and incorporate the static library (`libmy.a`) into your C programs. Here's a quick guide on how to compile your programs using the static library:

1. Compile the static library from the provided source code files:

   ```bash
   gcc -c *.c  # Compile each source file into object files
   ar -rc libmy.a *.o  # Create the static library
   ```

2. Compile your program using the static library:

   ```bash
   gcc your_program.c -o output_name -L. -lmy -I.
   ```

   Replace `your_program.c` with your specific source file and `output_name` with the desired name of the compiled executable.

Remember to include the appropriate header file using `#include "main.h"` in your program to access the function prototypes.
