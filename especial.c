#include "main.h"
#include <unistd.h>
/**
 * print_char - print a character
 * @args: variable to print
 *
 * Return: number of character printed
 */
int print_char(va_list args)
{
	char character = va_arg(args, int);

	write(1, &character, 1);
	return (1);
}

/**
 * print_decimal - print a numbel in decimal
 * @args: variable to print
 *
 * Return: number of character printed
 */
int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	char buffer[16];
	int i = 0, j;

	if (n == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		while (n != 0)
		{
			buffer[i++] = '0' + n % 10;
			n /= 10;
		}
		if (buffer[0] == '-')
		{
			buffer[i++] = '-';
		}
		for (j = i - 1; j >= 0; j--)
		{
			write(1, &buffer[j], 1);
		}
	}
	return (i);
}

/**
 * print_exponential - print a exponential
 * @args: variable to print
 *
 * Return: the number of characters printed
 */
int print_exponential(va_list args)
{
	double num = va_arg(args, double);
	char buffer[20];
	int count = 0, i;
	int len = sprintf(buffer, "%e", num);

	for (i = 0; i < len; i++)
	{
		write(1, buffer + i, 1);
		count++;
	}
	return (count);
}

/**
 * print_float - print a float
 * @args: variable to print
 *
 * Return: the number of characters printed
 */
int print_float(va_list args)
{
	double num = va_arg(args, double);
	char buffer[32];
	int count = 0, i;
	int n = sprintf(buffer, "%.6f", num);

	for (i = 0; i < n; i++)
	{
		write(1, &buffer[i], 1);
		count++;
	}
	return (count);
}

/**
 * print_general - print in format general
 * @args: variable to print
 *
 * Return: the number of characters printed
 */
int print_general(va_list args)
{
	double num = va_arg(args, double);
	char buffer[20];
	int count = 0, i;
	int len = sprintf(buffer, "%g", num);

	for (i = 0; i < len; i++)
	{
		write(1, buffer + i, 1);
		count++;
	}
	return (count);
}
