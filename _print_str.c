#include "main.h"
#include <unistd.h>

/**
 * _print_str - prints a character string
 * @str: string that is printed
 *
 * Return: the number of characters in the string
 */

int _print_str(char *str)
{
	int len = 0;

	if (str == NULL)
		str = "null";
	len = _strlen(str);

	return (write(1, str, len));
}
