#include "main.h"
/**
 * print_format - format specifier function
 * @specifier: specifier char
 * @args: argument pointer
 * Return: count
*/

int print_format(char specifier, va_list args)
{
	int count = 0;

	if (specifier == 'c')
		count += print_char(va_arg(args, int));
	else if (specifier == 's')
		count += print_str(va_arg(args, char *));
	else
		count += write(1, &specifier, 1);
	return (count);
}
