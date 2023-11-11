#include "main.h"
/**
 * print_char - function that prints character
 * @c: character
 * Return: prints char
*/

int print_char(int c)
{
	return (write(1, &c, 1));
}
