#include "main.h"

/**
 * print_binary - prints an unsigned int in binary
 * @ap: va_list argument
 * Return: number of characters printed
 */
int print_binary(va_list ap)
{
    unsigned int num = va_arg(ap, unsigned int);
    int count = 0;

    count += print_positive_binary(num);

    return (count);
}

/**
 * print_positive_binary - prints a positive integer in binary
 * @num: the positive integer
 * Return: number of characters printed
 */
int print_positive_binary(unsigned int num)
{
    int count = 0;

    if (num / 2)
        count += print_positive_binary(num / 2);

    _putchar(num % 2 + '0');
    count++;

    return (count);
}
