#include "main.h"
#include <unistd.h>
/**
 * print_hex - print a hexadecimal
 * @args: variable to print
 *
 * Return: the number of characters printed
 */
int print_hex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32];
	int count = 0;
	int i, j, rem;

	for (i = 0; num != 0; i++)
	{
		rem = num % 16;
		num = num / 16;
		if (rem < 10)
		{
			buffer[i] = rem + '0';
		}
		else
		{
			buffer[i] = rem - 10 + 'a';
		}
	}
	if (i == 0)
	{
		buffer[0] = '0';
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		write(1, &buffer[j], 1);
		count++;
	}
	return (count);
}

/**
 * print_hex_up - print a hexadecimal
 * @args: variable to print
 *
 * Return: the number of characters printed
 */
int print_hex_up(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32];
	int count = 0;
	int i, j, rem;

	for (i = 0; num != 0; i++)
	{
		rem = num % 16;
		num = num / 16;
		if (rem < 10)
		{
			buffer[i] = rem + '0';
		}
		else
		{
			buffer[i] = rem - 10 + 'A';
		}
	}
	if (i == 0)
	{
		buffer[0] = '0';
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		write(1, &buffer[j], 1);
		count++;
	}
	return (count);
}
