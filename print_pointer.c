#include "main.h"
<<<<<<< HEAD
#include <stdint.h>
=======

>>>>>>> askmoud-main
/**
 * print_pointer - a function to print a pointer address
 * @ap: the va_list that contains the pointer argument
 * Return: number of characters printed
 */

int print_pointer(va_list ap)
{
<<<<<<< HEAD
	int count = 0;
	unsigned long ptr_ad = (unsigned long)va_arg(ap, void *);
	count += _putchar('0');
	count += _putchar('x');
	count += print_positive_hex(ptr_ad, sizeof(void *) * 2);
=======
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

>>>>>>> askmoud-main
	return (count);
}
