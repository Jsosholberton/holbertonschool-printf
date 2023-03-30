#ifndef main_h
#define main_h
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);

typedef struct especial

{
	char *espc;
	int (*print)(va_list args);

} especial;


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

#endif
