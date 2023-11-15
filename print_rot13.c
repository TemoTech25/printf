#include "main.h"

/**
 * output_rot13 - Outputs a string with all alphabetic characters converted to ROT13.
 * @argList: The argument list containing the string to convert and output.
 * 
 * This function retrieves the next argument from the argument list as a string.
 * If the string is NULL, it replaces it with the string "(nil)".
 * It then iterates over each character in the string. If the character is an alphabetic character,
 * it converts the character to its ROT13 equivalent by replacing it with the corresponding character
 * in a predefined string, and then prints the character. If the character is not an alphabetic character,
 * it prints the character as is. The function returns the number of characters printed.
 * 
 * Return: The number of characters printed.
 */
int output_rot13(va_list argList)
{
	int i, j, counter = 0;
	int k = 0;
	char *str = va_arg(argList, char*);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		k = 0;
		for (j = 0; al[j] && !k; j++)
		{
			if (str[i] == al[j])
			{
				_putchar(bl[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[i]);
			counter++;
		}
	}
	return (counter);
}
