#include "main.h"
#include <unistd.h>

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
 * Return: the number of character printed
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
