#include "main.h"
/**
 * print_hex_lower_helper - helper function to print a hexadecimal number
 * @n: The number to be printed
 * @count: the pointer to the count of characters printed
 * Return: number of characters printed
 */
int print_hex_lower_helper(unsigned long n, int count)
{
	int digit;
	char hex_digits[] = "0123456789abcdef";

count = 0;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		digit = n % 16;
		_putchar(hex_digits[digit]);
		n /= 16;
		count++;
	}

	return (count);
}
