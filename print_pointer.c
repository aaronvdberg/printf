#include "main.h"
/**
 * print_pointer - print a pointer address in hexadecimal format
 * @ap: argument list
 * Return: number of characters printed
 */
int print_pointer(va_list ap)
{
	void *ptr = va_arg(ap, void*);
	int count = 0;

	_putchar('0');
	_putchar('x');
	count += 2;
	count += print_positive_hex((unsigned long)ptr, 1);

	return (count);
}
