#include "main.h"

/**
 * _print_str - prints a character string
 * @str: string that is printed
 *
 * Return: the number of characters in the string
 */

int _print_str(char *str)
{
	int len = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}
