#ifndef main_h
#define main_h
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
/**
* struct especial - Typedef struct
* @espc: pointer to the argument
* @print: The function associated
*/

typedef struct especial
{
	char *espc;
	int (*print)(va_list args);

} especial;

int get_especial(char var, va_list args);
int print_char(va_list args);
int print_decimal(va_list args);
int print_exponential(va_list args);
int print_float(va_list args);
int print_general(va_list args);
int print_intenger(va_list args);
int print_octal(va_list args);
int print_string(va_list args);
int print_unsigned(va_list args);
int print_hex(va_list args);
int print_hex_up(va_list args);
int print_direction(va_list args);

#endif
