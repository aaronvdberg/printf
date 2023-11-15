#include "main.h"
/**
 * print_reverse - A function to print the reversed string.
 * @args: The va_list that contains the string argument.
 * Return: Number of characters printed.
 */
int print_reverse(va_list args)
{
	char *str = va_arg(args, char *);
	size_t length = _strlen(str), i;
	int count = 0;

	if (str)
	{
		for (i = length; i > 0; i--)
		{
			_putchar(str[i - 1]);
			count++;
		}
	}

	return (count);
}
