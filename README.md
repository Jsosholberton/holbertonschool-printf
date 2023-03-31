# Holberton Printf Proyect

## Introduction
This repository contains the files to print the output according to the type of format entered.

## Requeriments
* You don’t have to reproduce the buffer handling of the C library printf function
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers
* Authorized functions:
  * ```write``` (```man 3 write```)
  * ```malloc``` (```man 3 malloc```)
  * ```free``` (```man 3 free```)
  * ```va_start``` (```man 3 va_start```)
  * ```va_end``` (```man 3 va_end```)
  * ```va_copy``` (```man 3 va_copy```)
  * ```va_arg``` (```man 3 va_arg```)

## Flowchar
(https://app.diagrams.net/#G1F5QzAlsJS6WULCc9g6aoiUe1DWUqKHFh)

## Usage :computer:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## List of Files

| Function Name | Description |
|---------------- | -----------|
|[main.h](https://github.com/Jsosholberton/holbertonschool-printf/blob/master/main.h)    | Declaration of all functions to be used, as well as libriaries |
|[main.c](https://github.com/Jsosholberton/holbertonschool-printf/blob/master/main.c) | Inputs that the function will have and expectation of outputs |
|[_print.c](https://github.com/Jsosholberton/holbertonschool-printf/blob/master/_printf.c) | Main function that returns the number of characters printed |
|[get_especial.c](https://github.com/Jsosholberton/holbertonschool-printf/blob/master/get_especial.c) | Get the function and execute it |
|[hex.c](https://github.com/Jsosholberton/holbertonschool-printf/blob/master/hex.c) | Functions that print a hexadecimal in upper or lower case |
|[especial.c](https://github.com/Jsosholberton/holbertonschool-printf/blob/master/especial.c) | Contains the functions to return a char, general, a number in; decimal, exponential and float. |
|[especial2.c](https://github.com/Jsosholberton/holbertonschool-printf/blob/master/especial2.c) | Contains the functions to return a string, address, unsigned, a number in; integer and octal. |
