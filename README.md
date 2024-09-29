# Printf from scratch - Codam

Ft_printf is a static library that is a imitation of the c library function printf , built as part of the Codam curriculum. This project demonstrates an in-depth understanding of variadic functions, formatting specifiers, and handling edge cases for output formatting.

## Features
Supports the following format specifiers:
- `%c` : Prints a single character
- `%s` : Prints a string
- `%p` : Prints a pointer in hexadecimal format
- `%d` : Prints a decimal (base 10) number
- `%i` : Prints an integer in base 10
- `%u` : Prints an unsigned decimal number
- `%x` : Prints a number in hexadecimal (base 16) lowercase format
- `%X` : Prints a number in hexadecimal (base 16) uppercase format
- `%%` : Prints a percent sign

## How to Use
1. Clone this repository:
   ```bash
   git clone git@github.com:Jackdehaan/Printf_from_scratch.git
2. make the static library with:
    ```bash
    make
3. Compile the test.c with the static library
    ```bash
    cc test.c libftprintf.a
4. Execute the executable
    ```bash
    ./a.out
