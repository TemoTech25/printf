#include "main.h"

/**
 * printf_string - prints a string value.
 * @val: function argument
 * Return: integer value
 */

int printf_string(va_list val)
{
	char *sr;
	int i = 0;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		sr = "(null";
		length = _strlen(sr);
		while (str[i] != '\0')
		{
			_putchar(sr[i]);
			i++;
		}
		return (length);
	}
	else
	{
		length = _strlen(sr);
		while (sr[i] != '\0')
		{
			_putchar(sr[i]);
			i++;
		}
		return (length);
	}
}
