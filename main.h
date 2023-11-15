#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct format
{
	char *gktp;
	int (*function)();
} convert;

int _putchar(char);
int _printf(const char *format, ...);
int output_character(va_list argList);
int output_string(va_list val);
int string_len(char *str);
int const_str_len(const char *str);
int print_percent(void);
int output_integer(va_list argList);
int output_decimal(va_list argList);
int print_binary(va_list argList);
int output_unsigned(va_list argList);
int output_octal(va_list argList);
int output_hex(va_list argList);
int output_HEX(va_list argList);
int output_exclusive_string(va_list argList);
int output_HEX_extra(unsigned int num);
int output_pointer(va_list argList);
int output_hex_extra(unsigned long int num);
int output_reversed_string(va_list argList);
int output_rot13(va_list argList);


#endif
