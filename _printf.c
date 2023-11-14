#include "main.h"

/**
 * print_buffer - Prints the contents of the buffer if it exists
 * @buffer: Array of chars
 * @buff_ind: Index at which to add the next char, represents the length.
 */

void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}

/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Number of printed chars
 */

int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list list;
	char output_buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			output_buffer[printed_chars++] = format[i];
			if (printed_chars == BUFF_SIZE)
			{
				print_buffer(output_buffer, &printed_char);
			}
		}
		else
		{
			print_buffer(output_buffer, &printed_chars);
			++i; // Move to the next character after '%'
			printed_chars += handle_print(format, &i, list, output_buffer);
			if (printed_chars == -1)
				return (-1);
		}
	}

	print_buffer(output_buffer, &printed_chars);
	
	va_end(list);

	return printed_chars;
}
