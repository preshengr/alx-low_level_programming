# Project: 0x0E-Structures_Typedef

## Description
This project focuses on working with structures and typedef in C programming. It includes a collection of functions and header files that demonstrate how to define, initialize, print, create, and free structures using typedef for improved code clarity and readability.

## Author
Author: Precious Okwukwe Amaechi

## Contents
The project includes the following files:

1. **1-init_dog.c**: This file contains a function `init_dog` that initializes the members of a `struct dog`.

2. **2-print_dog.c**: This file contains a function `print_dog` that prints the members of a `struct dog`.

3. **4-new_dog.c**: This file contains a function `new_dog` that creates a new `struct dog` with given parameters.

4. **5-free_dog.c**: This file contains a function `free_dog` that frees the memory allocated for a `struct dog`.

5. **dog.h**: This header file defines the `struct dog` structure using `typedef` and provides function prototypes for the functions in the other files.

6. **main.h**: This header file includes standard libraries and provides additional function prototypes that might be used in the main program.

## Usage
To use the functions and structures defined in this project, follow these steps:

1. Include the necessary header file(s) at the top of your C source file.
   ```c
   #include "dog.h"
   ```

2. Implement the main program using the provided functions and structures.
   ```c
   int main(void) {
       struct dog myDog;
       init_dog(&myDog, "Buddy", 3.5);
       print_dog(&myDog);
       
       struct dog *newDog = new_dog("Fido", 2.0);
       if (newDog != NULL) {
           print_dog(newDog);
           free_dog(newDog);
       }
       
       return 0;
   }
   ```

## License
This project and its contents are licensed to ALX Holberton SE School. You are free to use, modify, and distribute the code according to the terms of the license agreement.

## Acknowledgments
We would like to express our gratitude to Precious Okwukwe Amaechi for authoring this project and contributing to its development.

---
