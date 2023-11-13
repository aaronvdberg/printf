#include "main.h"
#include <stdint.h>
/**
 * print_pointer - print a pointer address in hexadecimal format
 * @ap: argument list
 * Return: number of characters printed
 */

int print_pointer(va_list ap)
{
	int count = 0;
	unsigned long ptr_ad = (unsigned long)va_arg(ap, void *);
	count += _putchar('0');
	count += _putchar('x');
	count += print_positive_hex(ptr_ad, sizeof(void *) * 2);
	return (count);
}
