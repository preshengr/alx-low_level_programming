# 0x1E-search_algorithms

## Overview
This repository contains various search algorithms implemented in C. These implementations are aimed at providing efficient ways to search through data structures like arrays and linked lists. The repository is organized into several subdirectories and files, each representing different search algorithms and their corresponding test cases.

## Directory Structure
- `listint`: Contains implementation files for searching algorithms in integer linked lists.
- `skiplist`: Contains implementation files for searching algorithms in skip lists.
- `tests`: Contains test files and scripts to verify the correctness of the implemented search algorithms.

## Files and Descriptions

### Main Source Files
- **0-linear.c**: Implementation of the linear search algorithm. It iterates through each element of an array until the target value is found.
- **1-binary.c**: Implementation of the binary search algorithm. It divides the array into halves to find the target value more efficiently in a sorted array.
- **100-jump.c**: Implementation of the jump search algorithm. It searches for the target value by jumping ahead by fixed steps and then performing a linear search within a block.
- **102-interpolation.c**: Implementation of the interpolation search algorithm. It improves the search for uniformly distributed data by estimating the position of the target value.
- **103-exponential.c**: Implementation of the exponential search algorithm. It finds the range where the target value might be and then performs a binary search within that range.
- **104-advanced_binary.c**: Implementation of an advanced version of the binary search algorithm, which handles duplicates and returns the first occurrence of the target value.
- **105-jump_list.c**: Implementation of the jump search algorithm for linked lists. It uses express links to jump ahead and then performs a linear search within a block.
- **106-linear_skip.c**: Implementation of the linear search algorithm for skip lists. It uses the skip list structure to improve search efficiency.
- **search_algos.h**: Header file containing the function prototypes and data structure definitions used in the search algorithms.

### Helper Files
- **0**: Shell script or metadata file related to the first task.
- **1**: Shell script or metadata file related to the second task.
- **100**: Shell script or metadata file related to the 100th task.
- **101-O**: Shell script or metadata file for a specific objective related to task 101.
- **102**: Shell script or metadata file related to the 102nd task.
- **103**: Shell script or metadata file related to the 103rd task.
- **104**: Shell script or metadata file related to the 104th task.
- **105**: Shell script or metadata file related to the 105th task.
- **106**: Shell script or metadata file related to the 106th task.
- **107-O**: Shell script or metadata file for a specific objective related to task 107.
- **108-O**: Shell script or metadata file for a specific objective related to task 108.
- **2-O**: Shell script or metadata file for a specific objective related to task 2.
- **3-O**: Shell script or metadata file for a specific objective related to task 3.
- **4-O**: Shell script or metadata file for a specific objective related to task 4.
- **5-O**: Shell script or metadata file for a specific objective related to task 5.
- **6-O**: Shell script or metadata file for a specific objective related to task 6.

## Usage Procedures

### Compiling the Files
Each C file can be compiled using `gcc` with the following command:
```sh
gcc -Wall -Wextra -Werror -pedantic -o [output_file] [source_file].c
```
Replace `[output_file]` with the desired output executable name and `[source_file]` with the source file name (e.g., `0-linear.c`).

### Running the Programs
After compiling the source files, you can run the executable to perform the search. Below are the steps for each algorithm:

#### Linear Search (0-linear.c)
1. Compile the file:
    ```sh
    gcc -Wall -Wextra -Werror -pedantic -o linear_search 0-linear.c
    ```
2. Run the executable:
    ```sh
    ./linear_search
    ```

#### Binary Search (1-binary.c)
1. Compile the file:
    ```sh
    gcc -Wall -Wextra -Werror -pedantic -o binary_search 1-binary.c
    ```
2. Run the executable:
    ```sh
    ./binary_search
    ```

#### Jump Search (100-jump.c)
1. Compile the file:
    ```sh
    gcc -Wall -Wextra -Werror -pedantic -o jump_search 100-jump.c
    ```
2. Run the executable:
    ```sh
    ./jump_search
    ```

#### Interpolation Search (102-interpolation.c)
1. Compile the file:
    ```sh
    gcc -Wall -Wextra -Werror -pedantic -o interpolation_search 102-interpolation.c
    ```
2. Run the executable:
    ```sh
    ./interpolation_search
    ```

#### Exponential Search (103-exponential.c)
1. Compile the file:
    ```sh
    gcc -Wall -Wextra -Werror -pedantic -o exponential_search 103-exponential.c
    ```
2. Run the executable:
    ```sh
    ./exponential_search
    ```

#### Advanced Binary Search (104-advanced_binary.c)
1. Compile the file:
    ```sh
    gcc -Wall -Wextra -Werror -pedantic -o advanced_binary_search 104-advanced_binary.c
    ```
2. Run the executable:
    ```sh
    ./advanced_binary_search
    ```

#### Jump List Search (105-jump_list.c)
1. Compile the file:
    ```sh
    gcc -Wall -Wextra -Werror -pedantic -o jump_list_search 105-jump_list.c
    ```
2. Run the executable:
    ```sh
    ./jump_list_search
    ```

#### Linear Skip Search (106-linear_skip.c)
1. Compile the file:
    ```sh
    gcc -Wall -Wextra -Werror -pedantic -o linear_skip_search 106-linear_skip.c
    ```
2. Run the executable:
    ```sh
    ./linear_skip_search
    ```

### Running Tests
Test files are located in the `tests` directory. Compile and run the test files similarly to the source files to verify the correctness of the search algorithms.

## Author
The project is authored by Precious Okwukwe Amaechi.

## License
This project is licensed to Alx Holberton School.
