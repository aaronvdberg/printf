#include "main.h"

/**
 * _printf - a function that produces output according to format
 * @format: a character string that handles conversion specifiers
 * Return: numbers of characters printed
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

while (format && *format) {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'c':
                    count += print_char(args);
                    break;
                case 's':
                    count += print_str(args);
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
        } else {
            _putchar(*format);
            count++;
            format++;
        }
    }

    return len;
}

}
