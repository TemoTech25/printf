#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - link the conversion specifiers for printf
 * @iv: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 */

typedef struct format
{
	char *iv;
	int (*f)();
} convert_printf;

int print_revs(va_list args);
int printf_char(va_list val);
int _printf(const char *format, ...);
int _putchar(char c);
int printf_string(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int *_strcpy(char *dest, char *src);
int printf_37(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int num);
int print_rot13(va_list val);
int printf_helper(int num);
#endif
