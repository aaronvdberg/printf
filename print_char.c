#include "main.h"
/**
 * print_char - function that prints character
 * @c: character
 * Return: prints char
*/

int print_char(va_list ap)
{
	char ch;

	ch = va_arg(ap, int);
	_putchar(ch);
	return (1);
}
