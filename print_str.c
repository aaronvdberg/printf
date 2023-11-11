#include "main.h"
/**
 * print_str - function that prints string
 * @str: string
 * Return: count
*/

int print_str(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		print_char((int)*str);
		++count;
		++str;
	}
	return (count);
}
