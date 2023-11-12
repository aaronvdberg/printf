#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

    return count;
}
