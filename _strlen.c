#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: the string to be considered
 *
 * Return: the length n. Or else 0.
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		len++;

	return (len);
}
