#include "main.h"

/**
 * string_len - Determines the length of a string.
 * @str: The string to measure.
 *
 * This function iterates over the string, counting the characters until
 * it reaches the null character that marks the end of the string.
 *
 * Return: The length of the string.
 */
int string_len(char *str)
{
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
		;
	return (counter);
}

/**
 * const_str_len - Determines the length of a constant string.
 * @str: The constant string to measure.
 *
 * This function iterates over the constant string
 * it reaches the null character that marks the end of the string.
 *
 * Return: The length of the string.
 */
int const_str_len(const char *str)
{
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
		;
	return (counter);
}
