#include "main.h"

/**
 * _printf - A function that produces output according to format.
 * @format: A character string that handles conversion specifiers.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list ap;
va_start(ap, format);

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
{
return (-1);
}
while (format && *format)
{
	if (*format == '%')
	{
	format++;

	switch (*format)
	{
		case 'c':
		count += print_char(ap);
		break;
		case 's':
		count += print_str(ap);
		break;
		case 'd':
                case 'i':
                count += print_int(ap);
                break;
		case '%':
		_putchar('%');
		count++;
		break;
		default:
		_putchar('%');
		_putchar(*format);
		count += 2;
	}
	format++;
	}
	else
	{
		_putchar(*format);
		count++;
		format++;
	}
}

va_end(ap);
return (count);
}
