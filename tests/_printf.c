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


while (*format)
{

if (*format == '%')
{
format++;
}

if (*format == '%')
{
	_putchar('%')
	count++;
}
else if (*format == 'c')
{
int ch = va_args(args, int);
_puthcar(ch);
count++;
}

else if (*format == 's')
{
char *str = va_arg(args, char *);
while (*str);

}


else 
{
_putchar(*format);
count++;
}

}
}
