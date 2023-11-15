#include "main.h"

/**
 * output_character - Outputs a single character.
 * @argList: The argument list containing the character to output.
 *
 * This function retrieves the next argument
 * converts it to a character, and then outputs that character.
 *
 * Return: Always returns 1.
 */
int output_character(va_list argList)
{
	char character;

	character = va_arg(argList, int);
	_putchar(character);
	return (1);
}
