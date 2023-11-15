#include "main.h"

/**
 * output_exclusive_string - Outputs a string, replacing non-printable characters with their hexadecimal representation.
 * @argList: The argument list containing the string to output.
 * 
 * This function retrieves the next argument from the argument list as a string.
 * If the string is NULL, it replaces it with the string "(null)".
 * It then iterates over each character in the string. If a character is a non-printable character
 * (i.e., its ASCII value is less than 32 or greater than or equal to 127), it prints a backslash,
 * followed by 'x', followed by the hexadecimal representation of the character.
 * If a character is a printable character, it prints the character itself.
 * The function returns the number of characters printed.
 * 
 * Return: The number of characters printed.
 */
int output_exclusive_string(va_list argList)
{
	char *str;
	int i, length = 0;
	int value;

	str = va_arg(argList, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = str[i];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEX_extra(value);
		}
		else
		{
			_putchar(str[i]);
			length++;
		}
	}
	return (length);
}

