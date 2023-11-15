#include "main.h"

/**
 * output_string - Outputs a string.
 * @val: The argument list containing the string to output.
 *
 * The function retrieves the next argument from the argument list as a string,
 *
 * Return: The length of the string.
 */
int output_string(va_list val)
{
	char *str;
	int index, length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (index = 0; index < length; index++)
			_putchar(str[index]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (index = 0; index < length; index++)
			_putchar(str[index]);
		return (length);
	}
}
