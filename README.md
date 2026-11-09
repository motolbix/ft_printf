*This project has been created as part of the 42 curriculum by motolbix.*

# ft_printf

## Description

ft_printf is a project from the 42 curriculum. The goal is to recreate the behaviour of the standard C `printf()` function by implementing my own function called `ft_printf()`.

This project focuses on understanding variadic functions in C, managing different argument types, parsing format strings, and handling formatted output.

The function supports the following conversions:

- `%c`: Prints a single character.
- `%s`: Prints a string.
- `%p`: Prints a pointer address.
- `%d`: Prints a signed decimal integer.
- `%i`: Prints an integer in decimal format.
- `%u`: Prints an unsigned decimal integer.
- `%x`: Prints an unsigned hexadecimal number using lowercase letters.
- `%X`: Prints an unsigned hexadecimal number using uppercase letters.
- `%%`: Prints the percent character (`%`).

The project produces a static library named `libftprintf.a`.

## Algorithm and Data Structure

### Algorithm

The main algorithm of `ft_printf()` is based on parsing the format string character by character.

1. Initialize a `va_list` to manage the variable arguments.
2. Iterate through the format string using an index.
3. If the current character is a regular character, print it using `write()`.
4. If a `%` character is encountered, inspect the next character to identify the conversion specifier.
5. Retrieve the corresponding argument from the `va_list` using `va_arg()`.
6. Call the appropriate function to handle and print the argument.
7. Continue parsing until the end of the format string.
8. Finish the `va_list` with `va_end()` and return the total number of characters printed.

### Data Structures

The project mainly uses the following elements:

- **`va_list`**: Manages the variable number of arguments passed to `ft_printf()`.
- **Format string**: A constant character string containing regular characters and conversion specifiers.
- **Index variable**: Tracks the current position while parsing the format string.

The implementation uses a modular approach, with separate functions for handling different conversion types. This makes the code easier to understand, maintain, and extend.

## Instructions

### Compilation

Clone the repository and enter the project directory.

Compile the library using:

```bash
make
```

Other available Makefile commands:

```bash
make clean   # Removes object files
make fclean  # Removes object files and libftprintf.a
make re      # Rebuilds the library
```

### Usage

Include the header file in your C program:

```c
#include "ft_printf.h"
```

Compile your program with the static library:

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -o program
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Name: %s | Age: %d\n", "Ali", 25);
    ft_printf("Hexadecimal: %x\n", 255);
    ft_printf("Progress: 100%%\n");

    return (0);
}
```

## Resources

- The `ft_printf` subject provided by 42.
- Linux manual pages (`man printf`, `man stdarg`).
- C documentation and references about variadic functions.
- Tutorials and articles about pointers, memory, and formatted output.
- The C programming language documentation.

### AI Usage

AI was used as a learning tool to understand fundamental C programming concepts related to this project.

It helped me understand:
- Variadic functions and variadic arguments in C.
- The purpose and usage of `va_list`, `va_start`, `va_arg`, and `va_end`.
- Basic CPU concepts.
- CPU registers and their role in function calls.
- How arguments are passed to functions.

AI was used for explanations and conceptual learning, not for generating the project's implementation.
