#include "main.h"


/**
 *
 *
 *
 *
 */



int print_int(int num)
{
    char buffer[20];
    int count = 0;
    int length = sprintf(buffer, "%d", num);
    count += write(1, buffer, length);
    return count;
}

int print_binary(unsigned int num)
{
    char buffer[32];
    int count = 0;
    int length = sprintf(buffer, "%u", num);
    count += write(1, buffer, length);
    return count;
}
