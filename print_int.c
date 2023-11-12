#include "main.h"

/**
 * print_positive_int - prints positive int
 * @num: the positive int
 * Return: int
 */

int print_positive_int(unsigned int num)
{
int count = 0;
if (num / 10)
count += print_positive_int(num / 10);
_putchar(num % 10 + '0');
count++;
return (count);
}

/**
 * print_integer - Print an int to stdout
 * @ap: read in
 * Return: Number of characters printed
 */
int print_int(va_list ap)
{
    int num = va_arg(ap, int);
    int count = 0;

    if (num < 0)
    {
        _putchar('-');
        count++;
        num = -num;
    }

    count += print_positive_int(num);

return (count);
} 
