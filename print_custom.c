#include "main.h"
/**
 * print_custom_str - prints string for no printable characters
 * @ap: argument list
 * Return: number of characters printed
*/

int print_custom_str(va_list ap)
{
	char *str = va_arg(ap, char*);
	int count = 0;

	if (str == NULL)
	{
		str = NULL_STRING;
	}

	while (*str)
	{
		if (*str >= 32 && *str < 127)
		{
			_putchar(*str);
			count++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += print_positive_hex((unsigned char)(*str), 1);
		}
		str++;
	}

	return (count);
}
