#include "main.h"

/**
 * _printf - A function that produces output according to format.
 * @format: A character string that handles conversion specifiers.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
int count = 0;
int flags = 0;
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
                count += print_int(ap, flags);
                break;
		case 'b':
		count += print_binary(ap);
		break;
		case 'u':
        count += print_unsigned(ap, flags);
        break;
    	case 'o':
        count += print_octal(ap, flags);
        break;
    	case 'x':
        count += print_hex_lower(ap, flags);
        break;
    	case 'X':
        count += print_hex_upper(ap, flags);
        break;
		case '%':
		_putchar('%');
		count++;
		break;
		case 'S':
    	count += print_custom_str(ap);
    	break;
		case 'p':
    	count += print_pointer(va_arg(ap, void *));
    	break;
		case 'r':
        count += print_reverse(ap);
        break;
		case 'R':
        count += print_rot13(va_arg(ap, char *));
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
