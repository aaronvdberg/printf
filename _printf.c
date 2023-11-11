#include "main.h"
#include <stdio.h>

/**
 * _printf - a function that produces output according to format
 * @format: a character string that handles conversion specifiers
 * Return: numbers of characters printed
*/

int _printf(const char *format, ...)
{
	int length;
	va_list args;

	chang_e f_list[] = {
		{"%", print_percent},
		{"c", print_char},
		{"s", print_string},
	};
	if (format == NULL)
		return (-1);
	va_start(args, format);
	length = format_reciver(format, f_list, args);
	va_end(args);
	return (length);
}
