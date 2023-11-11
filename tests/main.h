#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NULL_STRING "(null)"
#define NUL '\0'

int _printf(const char *format, ...);
int _putchar(char c);
int print_format(char specifier, va_list args);
int print_char(int c);
int print_str(char *str);


#endif

