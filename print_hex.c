#include "main.h"

/**
 * output_hex - Outputs a hexadecimal representation of an unsigned integer.
 * @argList: The argument list containing the unsigned integer 
 * 
 * retrieves the next argument from the argument list as an unsigned integer,
 * It calculates the number of digits in the hexadecimal representation
 * by repeatedly dividing the number by 16 and counting the divisions until the number is 0.
 * It then creates an array to store the digits of the hexadecimal representation
 * by repeatedly taking the remainder of the number divided by 16
 * until the number is 0. Finally, it prints the digits of the hexadecimal 
 * adjusting for hexadecimal digits greater than 9, and frees the memory allocated for the array.
 * The function returns the number of digits printed.
 * 
 * Return: The number of digits printed.
 */
int output_hex(va_list argList)
{
	int i;
	int *digitArray;
	int digitCount = 0;
	unsigned int num = va_arg(argList, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		digitCount++;
	}
	digitCount++;
	digitArray = malloc(digitCount * sizeof(int));

	for (i = 0; i < digitCount; i++)
	{
		digitArray[i] = temp % 16;
		temp /= 16;
	}
	for (i = digitCount - 1; i >= 0; i--)
	{
		if (digitArray[i] > 9)
			digitArray[i] = digitArray[i] + 39;
		_putchar(digitArray[i] + '0');
	}
	free(digitArray);
	return (digitCount);
}
