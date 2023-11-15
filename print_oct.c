#include "main.h"

/**
 * output_octal - Outputs an octal representation of an unsigned integer.
 * @argList: The argument list containing the unsigned integer to convert to octal.
 * 
 * This function retrieves the next argument from the argument list as an unsigned integer,
 * and then converts it to octal. It calculates the number of digits in the octal representation
 * by repeatedly dividing the number by 8 and counting the divisions until the number is 0.
 * It then creates an array to store the digits of the octal representation, and fills the array
 * by repeatedly taking the remainder of the number divided by 8, and storing the remainder in the array,
 * until the number is 0. Finally, it prints the digits of the octal representation in reverse order,
 * and frees the memory allocated for the array. The function returns the number of digits printed.
 * 
 * Return: The number of digits printed.
 */
int output_octal(va_list argList)
{
	int i;
	int *digitArray;
	int digitCount = 0;
	unsigned int num = va_arg(argList, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		digitCount++;
	}
	digitCount++;
	digitArray = malloc(digitCount * sizeof(int));

	for (i = 0; i < digitCount; i++)
	{
		digitArray[i] = temp % 8;
		temp /= 8;
	}
	for (i = digitCount - 1; i >= 0; i--)
	{
		_putchar(digitArray[i] + '0');
	}
	free(digitArray);
	return (digitCount);
}
