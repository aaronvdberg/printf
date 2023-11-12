#include <unistd.h>

/**
 * _puts - Prints a string to the standard output.
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */
int _puts(const char *str)
{
	int count = 0;

	while (*str)
	{
		write(1, str, 1);
		str++;
		count++;
	}

	return (count);
}
