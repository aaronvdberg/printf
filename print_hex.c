#include "main.h"
/**
 * print_hex_lower_helper - helper function print a hexadecimal number
 * @n: the number to be printed
 * @count: the pointer to the count of characters printed
 * Return: number of characters printed
*/

int print_hex_lower_helper(unsigned long n, int count)
{
	if (n / 16)
	{
		count = print_hex_lower_helper(n / 16, count);
	}

	_putchar("0123456789abcdef"[n % 16]);
	return (count + 1);
}
