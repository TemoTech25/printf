#include "main.h"

/**
 * _putchar - writes the char c to stdout
 * @c: The character to print
 * Return: 1 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
