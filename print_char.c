#include "main.h"
/**
 * print_char - function that prints character
 * @c: character
 * Return: prints char
*/

int print_char(va_list val)
{
	char ch;

	ch = va_arg(val, int);
	_putchar(ch);
	return (1);
}
