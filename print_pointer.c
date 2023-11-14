#include "main.h"

/**
 * print_pointer - A function to print pointer address.
 * @ap: va_list that contains the pointer argument.
 * Return: Number of characters printed.
 */
int print_pointer(va_list ap)
{
	void *ptr = va_arg(ap, void*);
	unsigned long int address = (unsigned long int)ptr;
	int count = 0;

	count += _putchar('0');
	count += _putchar('x');

	count += _printf("%016lx", address);

	return (count);
}
