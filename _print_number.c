#include "main.h"
/**
 * _print_number - will print a negative or positive number
 * @x: represent the number that will be printed
 *
 * Return: the number of characters printed
 */
int _print_number(int x)
{
	int char_count = 0;

	if (x < 0)
	{
		char_count += _print_str("negative");
		x = -x;
	}

	char_count += _print_str(x);

	return (char_count);
}
