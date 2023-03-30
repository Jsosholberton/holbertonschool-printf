#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0, tipe = 0;
	especial character[] = {
	    {"c", print_char},
	    {"d", print_decimal},
	    {"e", print_exponential},
	    {"f", print_float},
	    {"g", print_general},
	    {"i", print_intenger},
	    {"o", print_octal},
	    {"s", print_string},
	    {"u", print_unsigned},
	    {"x", print_hex},
	    {"error", NULL}
	};
	    va_start(args, format);

    while (format[i] != '\0')
    {
	    if (format[i] == '%')
	    {
		    tipe = 0;
		    while (tipe < 11 &&
			   (character[tipe].espc[0] != format[i + 1] ||
			    format[i + 1] == '\0'))
	   	    {
			    tipe++;
		    }
		    if (tipe == 11)
		    {
			    if (format[i + 1] == '%')
			    {
				    i++;
			    }
			    write(1, &format[i], 1);
			    count++;
		    }
		    else
		    {
			    count += character[tipe].print(args);
			    i++;
		    }
	    }
	    else
	    {
		    write(1, &format[i], 1);
		    count++;
	    }
	    i++;
    }
    va_end(args);
    return (count);
}
