#include "main.h"

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
	int fd = STDOUT_FILENO; 
    unsigned int num = va_arg(args, unsigned int);
	char octal_string_reversed[12];
    char octal_digits[] = "01234567";
    char octal_string[12];
    int i, j, bytes_written;
   
    while (num != 0)
	{
        octal_string[i] = octal_digits[num % 8];
        num /= 8;
        i++;
    }
    octal_string[i] = '\0';

    for (j = 0; j < i; j++)
	{
        octal_string_reversed[j] = octal_string[i - 1 - j];
    }
    bytes_written = write(fd, octal_string_reversed, i);

    if (bytes_written < 0)
	{
        return -1;
    }

    return bytes_written;
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
	unsigned int num = va_arg(args, unsigned int);
    char buffer[20];
    int i, n, j = 0;
    
    do {
        buffer[i++] = num % 10 + '0';
        num /= 10;
    } while (num > 0);
    
    for (j = i - 1; j >= 0; j--) 
	{
        if (write(1, &buffer[j], 1) == -1)
		{
        	return -1;
        }
        n++;
    }
    
    return (n);
}

/**
 * print_direction - print a hexadecimal
 * @args: variable to print
 *
 * Return: the number of characters printed
 */
int print_direction(va_list args)
{
	void *ptr = va_arg(args, void *);
	char buffer[20];
	int count = 0;
	unsigned long int_val = (unsigned long) ptr;
	int i = 0, digit;

	while (int_val > 0)
	{
		digit = int_val % 16;
		if (digit < 10)
		{
			*(buffer + i) = '0' + digit;
		}
		else
		{
			*(buffer + i) = 'a' + digit - 10;
		}
		int_val /= 16;
		i++;
	}
	if (i == 0)
	{
		*(buffer + i) = '0';
		i++;
	}
	*(buffer + i) = 'x';
	i++;
	*(buffer + i) = '0';
	i++;
	while (i > 0)
	{
		i--;
		write(1, buffer + i, 1);
		count++;
	}
	return (count);
}
