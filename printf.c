#include "main.h"

/**
 * output_printf - Selects and executes the correct function to print
 * @format: The format string containing conversion special
 *
 * Return: The number of characters printed.
 */
int output_printf(const char *format, ...)
{
	convert p[] = {
		{"%s", output_string}, {"%c", output_char},
		{"%%", output_percent},
		{"%i", output_int}, {"%d", output_int}, {"%r", output_reversed_string},
		{"%R", output_rot13}, {"%b", output_binary},
		{"%u", output_unsigned},
		{"%o", output_octal}, {"%x", output_hex}, {"%X", output_hex_uppercase},
		{"%S", output_exclusive_string}, {"%p", output_pointer}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}

