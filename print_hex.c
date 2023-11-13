#include "main.h"

/**
 *
 *
 *
 */

print_positive_hex(unsigned int num, int upper)
{
int count = 0;
char hex_digits[] = "0123456789abcdef";

char buffer[BUFF_SIZE];
int length = 0;

/** Printing HEX **/
while (num > 0)
{
buffer[length] = hex_digits[num % 16];
num = num / 16;
length++;
}
return count;
}
