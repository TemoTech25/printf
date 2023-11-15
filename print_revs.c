#include "main.h"

/**
 * output_reversed_string - Outputs a string in reverse order.
 * @argList: The argument list containing the string to reverse and output.
 * 
 * This function retrieves the next argument from the argument list as a string.
 * If the string is NULL, it replaces it with the string "(nil)".
 * It then calculates the length of the string, and prints the string in reverse order.
 * The function returns the number of characters printed.
 * 
 * Return: The number of characters printed.
 */
int output_reversed_string(va_list argList)
{
	char *str = va_arg(argList, char*);
	int i;
	int j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(str[i]);
	return (j);
}
