### 0x1A-hash_tables

**Author:** Engr Precious

---

### Table of Contents

1. [Description](#description)
2. [Usage](#usage)
3. [License](#license)

---

### Description

| File                        | Description                                          |
|-----------------------------|------------------------------------------------------|
| .gitignore                  | Git configuration file to ignore certain files/dirs. |
| 0-hash_table_create.c       | Function to create a new hash table.                 |
| 1-djb2.c                    | Implementation of the DJB2 hash function.             |
| 100-sorted_hash_table.c     | Extension: Implementation of a sorted hash table.     |
| 2-key_index.c               | Function to get the index of a key in a hash table.  |
| 3-hash_table_set.c          | Function to add an element to the hash table.        |
| 4-hash_table_get.c          | Function to retrieve a value from the hash table.    |
| 5-hash_table_print.c        | Function to print the content of a hash table.       |
| 6-hash_table_delete.c       | Function to delete a hash table and its elements.    |

---

### Usage

To use these hash table functions, follow these steps:

1. Compile the files using your preferred compiler:
   ```bash
   gcc -Wall -Werror -Wextra -pedantic *.c -o hash_table
   ```

2. Create a hash table and use the provided functions in your program:
   ```c
   #include "hash_tables.h"

   int main(void) {
       hash_table_t *ht;

       /* Create a new hash table */
       ht = hash_table_create(1024);

       /* Use other hash table functions as needed */

       /* Don't forget to delete the hash table when done */
       hash_table_delete(ht);

       return 0;
   }
   ```

---

### License

This project is licensed under the [ALX-Holberton School License](LICENSE).