#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * _print_str - prints a character string
 * @str: string that is printed
 *
 * Return: the number of characters in the string
 */

int _print_str(char *str)
{
	if (str == NULL)
		str = "(null)";

	int len = strlen(str);

	return (write(1, str, len));
}
