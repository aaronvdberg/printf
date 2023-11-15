#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
#define NULL_STRING "(null)"
#define NUL '\0'

/** flags **/

#define PLUS 1
#define HASH 2
#define SPACE 4

/** functions **/

int _printf(const char *format, ...);
int print_format(char specifier, va_list args);
int print_char(va_list ap);
int print_str(va_list ap);
int print_int(va_list ap, int flags);
int print_binary(va_list ap);
int print_positive_binary(unsigned int num);
int print_unsigned(va_list ap, int flags);
int print_positive_int(unsigned int num, int flags);
int print_hex_lower(va_list ap, int flags);
int print_positive_hex(unsigned int num, int uppercase);
int print_hex_upper(va_list ap, int flags);
int print_octal(va_list ap, int flags);
int print_positive_octal(unsigned int num);
int print_custom_str(va_list ap);
int print_pointer(va_list ap);
int print_hex_lower_helper(unsigned long n, int count);
int print_rot13(char *str);

/**flags*/
void set_flag(int *flags, char current_flag);
int get_flags(const char *format, int *f);

/** utils **/
int _puts(const char *str);
int _putchar(char c);
#endif
