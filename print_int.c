#include "main.h"

/**
 * printf_int - prints int
 * @args: print argument
 * Return: print number of characters output
 */

int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int  k = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		k++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			k++;
		}
	}
	_putchar(last + '0');

	return (k);
}

/**
 * printf_dec - outputs decimal
 * @args: output arguments print
 * Return: characters printed as numbers
 */

int printf_dec(va_list args)
{

	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int  z = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		z++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			k++;
		}
	}
	_putchar(last + '0');

	return (k);
}
