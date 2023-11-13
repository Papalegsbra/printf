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
	int i;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
			len++;
	return (write(1, str, len));
}
