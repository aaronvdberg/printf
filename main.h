#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define UNUSED(x) (void)(x)

#define NULL_STRING "(null)"
#define NUL '\0'

int _printf(const char *format, ...);
int print_func(int value);
int print_format(char specifier, va_list args);
int print_char(va_list ap);
int print_str(va_list ap);

/** utils **/
int _puts(char *str);
int _putchar(char c);
#endif

