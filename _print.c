#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: function argument
 * Return: integer value
*/

int _printf(const char *format, ...)
{
	convert_printf p[] = {
		{"%c", printf_char}, {"%s", printf_string},
		{"%%", printf_perc}, {"%d", print_dec}, {"%i", print_int}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_bin}, {"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exc_string}, {"%p", print_pointer}
	};

	va_list args;
	int i, length = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].iv[0] == format[i] && p[j].iv[1] == format[i + 1])
			{
				length += p[j].f(args);
				i += 2;
				break;
			}
			j--;
		}
		if (j < 0)
		{
			_putchar(format[i]);
			length++;
		}
	}
	va_end(args);
	return (length);
}
