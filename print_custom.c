#include "main.h"
/**
 * print_custom_str - prints string for no printable characters
 * @ap: argument list
 * Return: number of characters printed
*/

int print_custom_str(va_list ap)
{
	char *str = va_arg(ap, char*);
	int i;
	int count = 0;

	if (str == NULL)
	{
		str = NULL_STRING;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			_putchar(str[i]);
			count++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += print_positive_hex((unsigned char)(str[i]), 1);
		}
	}

	return (count);
}
