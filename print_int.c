#include "main.h"

/**
 * output_integer - Outputs an integer.
 * @argList: The argument list containing the integer to output.
 * 
 * This function retrieves the next argument from the argument list as an integer,
 * checks if it's negative, and if so, prints a minus sign and adjusts the number.
 * Then it calculates the digits of the number and outputs each digit.
 * The function returns the number of digits printed.
 * 
 * Return: The number of digits printed.
 */
int output_integer(va_list argList)
{
	int num = va_arg(argList, int);
	int digitNum, lastDigit = num % 10, digit;
	int count = 1;
	int exp = 1;

	num = num / 10;
	digitNum = num;

	if (lastDigit < 0)
	{
		_putchar('-');
		digitNum = -digitNum;
		num = -num;
		lastDigit = -lastDigit;
		count++;
	}
	if (digitNum > 0)
	{
		while (digitNum / 10 != 0)
		{
			exp = exp * 10;
			digitNum = digitNum / 10;
		}
		digitNum = num;
		while (exp > 0)
		{
			digit = digitNum / exp;
			_putchar(digit + '0');
			digitNum = digitNum - (digit * exp);
			exp = exp / 10;
			count++;
		}
	}
	_putchar(lastDigit + '0');

	return (count);
}

/**
 * output_decimal - Outputs a decimal number.
 * @argList: The argument list containing the decimal number to output.
 * 
 * This function retrieves the next argument from the argument list as an integer,
 * checks if it's negative, and if so, prints a minus sign and adjusts the number.
 * Then it calculates the digits of the number and outputs each digit.
 * The function returns the number of digits printed.
 * 
 * Return: The number of digits printed.
 */
int output_decimal(va_list argList)
{
	int num = va_arg(argList, int);
	int digitNum, lastDigit = num % 10, digit;
	int count = 1;
	int exp = 1;

	num = num / 10;
	digitNum = num;

	if (lastDigit < 0)
	{
		_putchar('-');
		digitNum = -digitNum;
		num = -num;
		lastDigit = -lastDigit;
		count++;
	}
	if (digitNum > 0)
	{
		while (digitNum / 10 != 0)
		{
			exp = exp * 10;
			digitNum = digitNum / 10;
		}
		digitNum = num;
		while (exp > 0)
		{
			digit = digitNum / exp;
			_putchar(digit + '0');
			digitNum = digitNum - (digit * exp);
			exp = exp / 10;
			count++;
		}
	}
	_putchar(lastDigit + '0');

	return (count);
}
