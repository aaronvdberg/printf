#include "main.h"

/**
 * print_pointer - a function to print a pointer address
 * @ap: the va_list that contains the pointer argument
 * Return: number of characters printed
 */
int print_pointer(va_list ap)
{
	void *ptr = va_arg(ap, void *);
	char *hex_prefix = "0x";
	int count = 0;

	if (ptr == NULL)
	{
		count += _printf("(nil)");
	}
	else
	{
		count += _printf("%s", hex_prefix);
		count += print_hex_lower_helper((unsigned long)ptr, 1);
	}

	return (count);
}
