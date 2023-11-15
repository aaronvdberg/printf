#include "main.h"
<<<<<<< Updated upstream
#include <stdint.h>
=======
>>>>>>> Stashed changes
/**
 * print_pointer - A function to print a pointer address.
 * @ap: The va_list that contains the pointer argument.
 * Return: Number of characters printed.
 */

int print_pointer(va_list ap)
{
	void *ptr = va_arg(ap, void *);
	char *hex_prefix = "0x";
	int count = 0;

	if (ptr == NULL)
	{
		count += _puts("(nil)");
	}
	else if (ptr != NULL)
	{
		count += _puts(hex_prefix);
		count += print_hex_lower_helper((unsigned long)ptr, 1);
	}

	return (count);
}
