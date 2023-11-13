#include "main.h"
/**
 * print_positive_hex - print a positive integer in hexadecimal format
 * @num: the positive integer to be printed
 * @uppercase: flag to indicate whether to use uppercase letters
 * Return: number of characters printed
 */
int print_positive_hex(unsigned int num, int uppercase)
{
	int count = 0;
	int remainder;

	if (num / 16 != 0)
	{
		count += print_positive_hex(num / 16, uppercase);
	}

	remainder = num % 16;

	if (remainder < 10)
	{
		_putchar(remainder + '0');
	}
	else
	{
		_putchar(uppercase ? remainder - 10 + 'A' : remainder - 10 + 'a');
	}

	count++;

	return (count);
}
