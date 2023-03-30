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
	float exponential = va_arg(args, double);

	write(1, &exponential, 1);
	return (1);
}

/**
 * print_float - print a float
 * @args: variable to print
 *
 * Return: the number of characters printed
 */
int print_float(va_list args)
{
	char flooat = va_arg(args, double);

	write(1, &flooat, 1);
	return (1);
}

/**
 * print_general - print in format general
 * @args: variable to print
 *
 * Return: the number of characters printed
 */
int print_general(va_list args)
{
	int i = 0;
	char *general = va_arg(args, char *);

	while (general[i] != '\0')
	{
		write(1, &general[i], 1);
		i++;
	}
	return (i);
}

/**
 * print_intenger - print a intenger
 * @args: variable to print
 *
 * Return: the nimber of characters printed
 */
int print_intenger(va_list args)
{
	int len;
	int n = va_arg(args, int);
	char buffer[32];
	int i = 0;

	if (n < 0)
	{
		buffer[i++] = '-';
		n = -n;
	}
	do {
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	} while (n > 0);
	len = i;
	while (i > 0)
	{
		i--;
		write(1, &buffer[i], 1);
	}
	return (len);
}

/**
 * print_octal - print a octal
 * @args: variable to print
 *
 * Return: the number of characters printed
 */
int print_octal(va_list args)
{
	char character;

	character = va_arg(args, int);
	write(1, &character, 1);
	return (1);
}

/**
 * print_string - print a string
 * @args: format to print
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *string;
	int i = 0;

	string = va_arg(args, char *);
	while (string[i] != '\0')
	{
		write(1, &string[i], 1);
		i++;
	}
	return (i);
}

/**
 * print_unsigned - print a unsigned variable
 * @args: variable to print
 *
 * Return: the number of character printed
 */
int print_unsigned(va_list args)
{
	int unsig = va_arg(args, int);

	write(1, &unsig, 1);
	return (1);
}
/**
 * print_hex - print a hexadecimal
 * @args: variable to print
 *
 * Return: the number of characters printed
 */
int print_hex(va_list args)
{
	char character;

	character = va_arg(args, int);
	write(1, &character, 1);
	return (1);
}
