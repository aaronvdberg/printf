#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NULL_STRING "(null)"
#define NUL '\0'

/**
 * struct change - function	that defines structure for symbols and functions
 * @ope: the operator
 * @f: function's associated
*/

typedef struct change
{
	char *ope;
	int (*f)(va_list);
} chang_e;

int _printf(const char *format, ...);
int _putchar(char c);
int format_reciever(const char *format, chang_e f_list[], va_list arg_list);
int print_percent(va_list);
int print_char(va_list);
int print_string(va_list);


#endif

