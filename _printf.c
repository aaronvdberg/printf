#include "main.h"
#include <stdio.h>

/**
 * _printf - a function that produces output according to format
 * @format: a character string that handles conversion specifiers
 * Return: numbers of characters printed
*/

int _printf(const char *format, ...)
{
	int count;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), args);
		else
		{
			count += write(1, format, 1);
			++format;
		}
	}
	va_end(args);
}
