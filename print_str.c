#include "main.h"
/**
 * print_str - Print a string to standard output
 * @ap
*/

int print_str (va_list ap)
{
int i;
char *str;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return i;
}
