#include "main.h"

/**
 * print_octal - print an unsigned integer in octal format
 * @ap: argument list
 * Return: number of characters printed
*/
int print_octal(va_list ap, int flags)
{
    unsigned int num = va_arg(ap, unsigned int);
    int count = 0;

    if (flags & HASH) {
        _putchar('0');
        count++;
    }

    if (num != 0) {
        count += print_positive_octal(num);
    }

    return count;
}

/**
 * print_positive_octal - print a positive integer in octal format
 * @num: the positive integer to be printed
 * Return: number of characters printed
 */
int print_positive_octal(unsigned int num)
{
	int count = 0;

	if (num / 8 != 0)
	{
		count += print_positive_octal(num / 8);
	}

	_putchar(num % 8 + '0');
	count++;

	return (count);
}
