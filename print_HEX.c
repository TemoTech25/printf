#include "main.h"

/**
 * print_HEX - prints an hexgecimal number.
 * @argList: arguments.
 * Return: counter.
 */

int output_HEX(va_list argList)
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
			digitArray[i] = digitArray[i] + 7;
		_putchar(digitArray[i] + '0');
	}
	free(digitArray);
	return (digitCount);
}
