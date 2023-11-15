#include "main.h"
/**
 * print_positive_int - prints positive int
 * @num: the positive int
 * Return: int
 */
int print_positive_int(unsigned int num, int flags)
{
    int count = 0;
    if (num / 10)
        count += print_positive_int(num / 10, flags);
    _putchar(num % 10 + '0');
    count++;
    return (count);
}
/**
 * print_int - Print an int to stdout
 * @ap: read in
 * @flags: flags for formatting
 * Return: Number of characters printed
 */
int print_int(va_list ap, int flags)
{
    int num = va_arg(ap, int);
    int count = 0;

    if (flags & PLUS) {
        if (num >= 0) {
            _putchar('+');
            count++;
        }
    }

    if (flags & SPACE) {
        if (num >= 0 && !(flags & PLUS)) {
            _putchar(' ');
            count++;
        }
        }


    return count;
}
