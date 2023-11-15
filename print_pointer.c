#include "main.h"

/**
 * output_pointer - Outputs a hexadecimal representation of a pointer.
 * @argList: The argument list containing the pointer to output.
 * 
 * This function retrieves the next argument from the argument list as a pointer.
 * If the pointer is NULL, it prints the string "(nil)".
 * If the pointer is not NULL, it casts the pointer to an unsigned long integer,
 * and then outputs the hexadecimal representation of the integer, prefixed with '0x'.
 * The function returns the number of characters printed.
 * 
 * Return: The number of characters printed.
 */
int output_pointer(va_list argList)
{
	void *ptr;
	char *nullStr = "(nil)";
	long int x;
	int y;
	int i;

	ptr = va_arg(argList, void*);
	if (ptr == NULL)
	{
		for (i = 0; nullStr[i] != '\0'; i++)
		{
			_putchar(nullStr[i]);
		}
		return (i);
	}

	x = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	y = output_hex_extra(x);
	return (y + 2);
}
