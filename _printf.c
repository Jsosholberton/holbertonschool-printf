#include "main.h"

/**
 * _printf - print anything
 * @format: string to be printed
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0, tipe = 0;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			tipe = get_especial(format[i + 1], args);
			if (tipe == -1)
			{
				if (format[i + 1] == '%')
				{
					write(1, &format[i], 1);
					i++;
					count++;
				}
				else
				{
					write(1, &format[i], 1);
				}
			}
			else
			{
				count += tipe;
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
