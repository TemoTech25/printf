#include "main.h"

/**
 * print_binary - Prints a binary representation of an unsigned integer.
 * @argList: The argument list containing the unsigned integer to convert to binary.
 * 
 * This function retrieves the next argument from the argument list as an unsigned integer,
 * and then converts it to binary. It iterates over each bit in the integer,
 * shifting and masking as necessary to isolate each bit. If the bit is 1,
 * it prints the corresponding character and increments a counter.
 * If no 1 bits are found after checking all of them, it prints a '0' and increments the counter.
 * The function returns the number of characters printed.
 * 
 * Return: The number of characters printed.
 */
int print_binary(va_list argList)
{
	int hasOne = 0;
	int charCount = 0;
	int i, shift = 1, bit;
	unsigned int num = va_arg(argList, unsigned int);
	unsigned int masked;

	for (i = 0; i < 32; i++)
	{
		masked = ((shift << (31 - i)) & num);
		if (masked >> (31 - i))
			hasOne = 1;
		if (hasOne)
		{
			bit = masked >> (31 - i);
			_putchar(bit + 48);
			charCount++;
		}
	}
	if (charCount == 0)
	{
		charCount++;
		_putchar('0');
	}
	return (charCount);
}
