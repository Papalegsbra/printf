#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: character to print
 *
 * Return: On success 1. Or else, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
