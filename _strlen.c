#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: the string to be considered
 *
 * Return: the length n. Or else 0.
 */

int _strlen(char *str)
{
	int len = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	return (len);
}
