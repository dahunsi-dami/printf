# C - printf project
**`An ALX Software Engineering Program project.`**<br><br>

## Project Overview

This is a collaborative project to build a custom `_printf` function in C that simulates the standard `printf` function!

This project aims to enhance our understanding of C programming and explore the intricacies of building a fundamental yet powerful function used for formatted output.

## Project Contributors

- **Meet the amazing individuals contributing to this project:**
  - [@dahunsi-dami](https://github.com/dahunsi-dami)
  - [@eveshogweyore](https://github.com/eveshogweyore)

## Technologies Used

- **This project leverages the following technologies:**
  - Programming Language: `C`
  - Operating System: `Ubuntu 20.04`

## Functions Overview

We built several functions from scratch, each prefixed with an underscore `_`, to handle different aspects of the custom `_printf` functionality. The project leverages C's variadic functions and other advanced features, making it a rewarding learning experience.

Here is a table summarizing the key functions used in this project.

*Functions we built from scratch start with the underscore `_` character.*

| Function Name 		| Description 													|
| ----------------------|---------------------------------------------------------------|
| `_printf`			| Produces output according to a specified format, handles special cases with `_print_all`, prints characters using `_putchar`, and returns the total number of characters printed (excluding the null byte).			|
| `_putchar`			| Writes a single character to the standard output, and returns `1` on success or `-1` if an error occurs.   |
| `_print_all`   | Decides which argument to take in based on the specifier it encounters by calling appropriate helper functions (e.g., `_print_s` for strings, `_dtob` for binary), and returns the total number of characters printed or `%` if the specified is invalid, followed by the specifier itself.   |
| `_print_d`   | Prints an integer (including negative numbers) to the standard output, and returns the total number of characters printed.   |
| `_print_s`   | Prints a string minus null byte, or `"(null)"` if the string is NULL, to the standard output, and returns the total number of characters printed.   |
| `_add_to_buffer`   | Appends a specified character to a string buffer, updates its null terminator, and returns the new length of the string in the buffer.   |
| `_dtob`   | Converts a given decimal integer to its binary representation, prints it using `_putchar`, and returns the number of binary digits printed.   |
| `write`   | Writes a specified character with a specified size in bytes to a specified output.   |
| `va_start`   | Tells va_arg after which argument to start collecting variable arguments from.   |
| `va_end`   | Ends the process of taking in variable arguments.   |

## Compilation

All files were compiled on Ubuntu 20.04 LTS using gcc with these options:

`$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`

## Requirements

- All code uses the `Betty` style and is checked witih `betty-style.pl` and `betty-doc.pl`.
- No global variables were allowed or used.
- No more than 5 functions per file.
- All function prototypes are included in the header file called `main.h`.
- All header files are include guarded.
