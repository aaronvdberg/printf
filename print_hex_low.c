#include "main.h"
/**
 * print_hex_lower - print an unsigned integer in lowercase hexadecimal format
 * @ap: argument list
 * Return: number of characters printed
 */
int print_hex_lower(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count += print_positive_hex(num, 0);
	}

	return (count);
}
