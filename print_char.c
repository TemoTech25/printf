#include "main.h"

/**
 * printf_char - prints char
 * @val: function arguments
 * Return: 1 (Success)
 */

int printf_char(va_list val)
{
	char skt;

	skt = va_arg(val, int);
	_putchar(skt);
	return (1);
}
