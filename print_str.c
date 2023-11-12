#include "main.h"

/**
 * print_str - Entry point
 * Description: prints a string
 * Return: the string
 * @ap: read in
*/

int print_str(va_list ap)
{
int i;
char *str;
str = va_arg(ap, char *);
if (str == NULL)
{
str = "(nill)";
return (_puts(str));
}
for (i = 0; str[i]; i++)
{
_putchar(str[i]);
}
return (i);
}
