# Project Title: 0x0D-preprocessor

## Description
This project includes a collection of header files that demonstrate the use of preprocessor directives and macros in C programming. Each header file defines specific macros that can be used to simplify code and enhance its readability.

## Author
Engr Precious Okwukwe

## Contents
The project contains the following header files:

1. **0-object_like_macro.h**: Defines a macro named SIZE with a value of 1024.
2. **1-pi.h**: Defines a macro named PI with a value of 3.14159265359.
3. **3-function_like_macro.h**: Defines a macro named ABS(x) that computes the absolute value of a number x.
4. **4-sum.h**: Defines a macro named SUM(x, y) that computes the sum of two numbers x and y.

## Usage
To use any of the macros defined in these header files, follow these steps:

1. Include the desired header file at the top of your C source file.
   ```c
   #include "0-object_like_macro.h"
   ```
   Replace `"0-object_like_macro.h"` with the appropriate header file name.

2. You can now use the macros defined in the included header file within your C code.
   ```c
   int size = SIZE; // This will be replaced with '1024' during preprocessing.
   ```

## Example
Here's an example of how to use the macros from these header files in your code:

```c
#include "0-object_like_macro.h"
#include "1-pi.h"
#include "3-function_like_macro.h"
#include "4-sum.h"

int main() {
    int size = SIZE;
    float circleArea = PI * radius * radius;
    int absoluteValue = ABS(-42);
    int sum = SUM(10, 20);

    // Rest of your code...
    
    return 0;
}
```

## License
This project and its contents are licensed to Engr Precious Okwukwe. Feel free to use, modify, and distribute the code according to the terms of the license agreement.

## Acknowledgments
We would like to acknowledge the contributions of Engr Precious Okwukwe to this project.

---
