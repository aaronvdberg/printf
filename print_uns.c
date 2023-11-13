#include "main.h"
/**
 * print_unsigned - function that prints an unsigned integer
 * @ap: argument list
 * Return: numbers of characters printed
*/

int print_unsigned(va_list ap)
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
		count += print_positive_int(num);
	}

	return (count);
}
