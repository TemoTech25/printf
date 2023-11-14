#include <unistd.h>

/**
 * putchar - Write a character to stdout
 * @ch: The character to write
 *
 * Return: The character written or EOF on error
 */
int putchar(int ch)
{
	return (write(1, &ch, 1));
}
