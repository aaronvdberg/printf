#include "main.h"
/**
 * print_unsigned - function that prints an unsigned integer
 * @ap: argument list
 * @flags: flags for formatting
 * Return: numbers of characters printed
 */
int print_unsigned(va_list ap, int flags)
{
    unsigned int num = va_arg(ap, unsigned int);
    int count = 0;

    if (flags & PLUS) {
        _putchar('+');
        count++;
    } else if (flags & SPACE) {
        _putchar(' ');
        count++;
    }

    if (flags & HASH) {
		_putchar('0');
        _putchar('x');
        count += 2;
    }

    if (num == 0) {
        _putchar('0');
        count++;
    } else {
        count += print_positive_int(num, flags);
    }

    return count;
}
