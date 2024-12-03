# ALX printf project

## Project Overview

This is a collaborative project to build a custom `_printf` function in C that simulates the builtin `printf` function!

This project aims to enhance our understanding of C programming and explore the intricacies of building a a fundamental yet powerful function used for formatted output.

## Project Contributors

- **Meet the amazing individuals contributing to this project:**
  - [@dahunsi-dami](https://github.com/dahunsi-dami)
  - [@eveshogweyore](https://github.com/eveshogweyore)

## Technologies Used

- **This project leverages the following technologies:**
  - Programming Language: `C`
  - Operating System: `Ubuntu 20.04`

## Functions Overview

Here is a table summarizing the key functions used in this project.

Functions we built from scratch start with the underscore `_` character.

| Function Name 		| Description 													|
| ----------------------|---------------------------------------------------------------|
| `_printf`			| Produces output according to a specified format, handles special cases with `_print_all`, prints characters using `_putchar`, and returns the total number of characters printed (excluding the null byte).			|
| `_putchar`			| Function to print a single character to the standard output   |
| `_printf`			| Function that produces output according to a specified format			|
| `_print_all`   | Function that determines which argument to take in based on the specifier it encounters   |
| `_print_d`   | Function that prints an integer to the standard output   |
| `_print_s`   | Function that prints a string minus null byte to the standard output   |
| `_add_to_buffer`   | Appends a specified character to a string buffer, updates its null terminator, and returns the new length of the string in the buffer   |
| `_dtob`   | Converts a given decimal integer to its binary representation, prints it using `_putchar`, and returns the number of binary digits printed   |
| `write`   | Function that writes a specified character with a specified size in bytes to a specified output   |
| `va_start`   | Function that tells va_arg after which argument to start collecting variable arguments from   |
| `va_end`   | Function that ends the process of taking in variable arguments   |
