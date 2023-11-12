#include "main.h"
/**
 * print_str - Print a string to standard output
<<<<<<< HEAD
 * @ap 
 *
*/

int print_str (va_list ap)
{
	int i;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		str = ("Nothing entered");
		return (_puts(str));
	}
=======
 * @ap
 */


int print_str (va_list ap)
{
int i;
char *str;1
>>>>>>> fad2b2b (betty fix)

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return i;
}
