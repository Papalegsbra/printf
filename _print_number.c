#include "main.h"

/**
 * _print_number - will print a negative or positive number
 * @x: represent the number that will be printed
 *
 * Return: the number of characters printed
 */
int _print_number(int x)
{
	int char_cnt = 0;
	int buf, q, i;
	int power = 1;

	if (x < 0)
	{
		char_cnt += _putchar('-');
		x = -x;
	}

	if (x == 0)
		return (char_cnt += _putchar('0'));

	buf = x / 10;
	while (buf != 0)
	{
		power *= 10;
		buf /= 10;
	}
	for (i = 0; power > 0; i++)
	{
		q = x / power;
		char_cnt += _putchar(q + '0');
		x %= power;
		power /= 10;
	}
	return (char_cnt);
}

