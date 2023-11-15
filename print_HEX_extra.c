#include "main.h"

/**
 * output_hex_extra - Outputs a hexadecimal representation of an unsigned integer.
 * @num: The unsigned integer to convert to hexadecimal.
 * 
 * This function takes an unsigned integer as an argument,
 * and then converts it to hexadecimal. It calculates the number of digits in the hexadecimal representation
 * by repeatedly dividing the number by 16 and counting the divisions until the number is 0.
 * It then creates an array to store the digits of the hexadecimal representation, and fills the array
 * by repeatedly taking the remainder of the number divided by 16, and storing the remainder in the array,
 * until the number is 0. Finally, it prints the digits of the hexadecimal representation in reverse order,
 * adjusting for hexadecimal digits greater than 9, and frees the memory allocated for the array.
 * The function returns the number of digits printed.
 * 
 * Return: The number of digits printed.
 */
int output_HEX_extra(unsigned int num)
{
	int i;
	int *digitArray;
	int digitCount = 0;
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
			digitArray[i] = digitArray[i] + 7;
		_putchar(digitArray[i] + '0');
	}
	free(digitArray);
	return (digitCount);
}

