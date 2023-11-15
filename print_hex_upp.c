#include "main.h"
/**
 * print_hex_upper - print an unsigned integer in uppercase hexadecimal format
 * @ap: argument list
 * Return: number of characters printed
 */
int print_hex_upper(va_list ap, int flags)
{
    unsigned int num = va_arg(ap, unsigned int);
    int count = 0;

    if (flags & HASH)
	{
        _putchar('0');
        _putchar('X');
        count += 2;
    }

    if (num != 0) {
        count += print_positive_hex(num, 1);
    }

    return count;
}