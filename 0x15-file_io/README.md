# Project Name: 0x15-file_io

## Project Description
This project consists of a collection of C programs and header files that deal with various file input/output operations. Each task corresponds to a specific C file, and the project also includes a header file, `main.h`, which contains function prototypes and necessary headers for the project.

## Table of Contents
- [Files](#files)
- [Task Descriptions](#task-descriptions)
- [Usage](#usage)
- [Compilation](#compilation)
- [Author](#author)
- [License](#license)

## Files
- `0-read_textfile.c`: Program to read and print the contents of a text file.
- `1-create_file.c`: Program to create a new text file or truncate an existing one.
- `2-append_text_to_file.c`: Program to append text to the end of a file.
- `3-cp.c`: Program to copy the content of one file to another file.
- `100-elf_header.c`: Program to read and print the ELF header information of an ELF file.
- `main.h`: Header file containing function prototypes and necessary headers for the project.

## Task Descriptions
1. **0-read_textfile.c**: This program reads and prints the contents of a text file to the standard output. It takes the filename as an argument and the number of letters to read from the file.

2. **1-create_file.c**: This program creates a new text file or truncates an existing one to an empty file. It takes the filename as an argument and the text content to write into the file.

3. **2-append_text_to_file.c**: This program appends text to the end of an existing file. It takes the filename as an argument and the text content to append.

4. **3-cp.c**: This program copies the content of one file to another. It takes two filenames as arguments, the source file and the destination file.

5. **100-elf_header.c**: This program reads and prints the ELF header information of an ELF file. It takes the ELF file's filename as an argument.

## Usage
You can use the programs provided in this project to perform various file input/output operations. Follow the specific usage instructions for each program as described in their respective task descriptions above.

## Compilation
You can compile the programs using a C compiler like GCC. Here's an example of how to compile and run the `0-read_textfile.c` program:

```bash
gcc -Wall -Werror -Wextra -pedantic 0-read_textfile.c -o read_textfile
./read_textfile filename.txt 1024
```

Replace `filename.txt` and `1024` with the appropriate filename and number of letters to read.

## Author
[Precious Okwukwe Amaechi]

## License
This project is open-source and available under the [MIT License](LICENSE) Also a project by ALX Africa and Holberton. See the `LICENSE` file for more details.
