#include "main.h"
/**
 * get_especial - get the function and run the function
 * @var: variable to compare
 * @args: variable to print
 *
 * Return: number of characters printed, else -1
 */
int get_especial(char var, va_list args)
{
	int tipe = 0;

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
		{NULL, NULL}
	};
	while (character[tipe].espc != NULL)
	{
		if (var == *(character[tipe].espc))
		{
			return (character[tipe].print(args));
		}
		tipe++;
	}
	return (-1);
}
