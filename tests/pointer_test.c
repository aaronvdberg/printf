#include "main.h"


/**
 *
 *
 */

int main()
{
    int variable = 42;
    int *ptr = &variable;

    _printf("Address of variable: %p\n", (void *)ptr);

    return 0;
}
