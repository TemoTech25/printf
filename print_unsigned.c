#include "main.h"

/**
 * output_unsigned - Outputs an unsigned integer.
 * @argList: The argument list containing the unsigned integer to output.
 * 
 * This function retrieves the next argument from the argument list as an unsigned integer,
 * and then converts it to a string of digits. It iterates over each digit in the integer,
 * shifting and masking as necessary to isolate each digit. If the digit is not 0,
 * it prints the corresponding character and increments a counter.
 * If no non-zero digits are found after checking all of that
 * The function returns the number of characters printed.
 * 
 * Return: The number of characters printed.
 */
int output_unsigned(va_list argList)
{
	int hasNonZero = 0;
	int charCount = 0;
	int i, shift = 1, digit;
	unsigned int num = va_arg(argList, unsigned int);
	unsigned int masked;

	for (i = 0; i < 32; i++)
	{
		masked = ((shift << (31 - i)) & num);
		if (masked >> (31 - i))
			hasNonZero = 1;
		if (hasNonZero)
		{
			digit = masked >> (31 - i);
			_putchar(digit + '0');
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
