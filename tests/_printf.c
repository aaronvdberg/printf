#include "main.h"

/**
 * _printf - a function that produces output according to format
 * @format: a character string that handles conversion specifiers
 * Return: numbers of characters printed
*/
int _printf(const char *format, ...)
{
    int i;
    int count = 0;
    va_list ap;
    va_start(ap, format);

/**
 * Hamza what the fuck did you write previously it's nonsensical
 * using switch cases now because it is faster
 *
 *
 */

while (format && *format != '\0')
  {
        if (*format == '%')
        {
            switch (*(++format))
            {
            case 'c':
                count += write(1, &va_arg(ap, int), 1);
                break;
            case 's':
                count += write(1, va_arg(ap, char *), 1);
                break;
            case '%':
                count += write(1, "%", 1);
                break;
	    case 'd':
	    case 'i':
	         count += write_integer(va_arg(ap, int));
		 break;
	    case 'b':
	    	 count += write_binary(va_arg(ap, unsigned int));
	    default:
                count += write(1, "%", 1);
                break;
            }
        }
        else
        {
            count += write(1, format, 1);
        }

        ++format;
    }
va_end(ap);
return (count);
}


