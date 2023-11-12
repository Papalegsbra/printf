#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string.
 * The format string is composed of zero or more directives.
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
	va_list str;
	int count = 0;

	va_start(str, format);
	while (*format)
	{
		if (*format == '%')
		{
			if (*(format + 1) == 'c')
			{
				count += _putchar(va_arg(str, int));
				format += 2;
			}
			if (*(format + 1) == 's')
			{
				count += _print_str(va_arg(str, char *));
				format += 2;
			}
			if (*(format + 1) == '%')
			{
				count += _putchar('%');
				format += 2;
			}
		}
		else
		{
			count += _putchar(*format);
			format++;
		}
	}
	va_end(str);
	return (count);
}
