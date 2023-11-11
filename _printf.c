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

    while (format && *format != '\0')
    {
        if (*format == '%')
        {
            count += print_format(*(++format), ap);
        }
        else
        {
            count += print_char(*format);
            ++format;
        }
    }

    va_end(ap);

    return count;
}
