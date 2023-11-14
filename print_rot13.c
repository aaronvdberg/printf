#include "main.h"
/**
 * print_rot13 - a function to print the rot13'ed string
 * @str: the input string
 * Return: number of characters printed
*/

int print_rot13(char *str)
{
	int count = 0;

	if (str)
	{
		while (*str)
		{
			if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
			{
				_putchar(*str + 13);
				count++;
			}
			else if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
			{
				_putchar(*str - 13);
				count++;
			}
			else
			{
				_putchar(*str);
				count++;
			}
			str++;
		}
	}
	return (count);
}
