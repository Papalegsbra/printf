#include "main.h"
#include <stddef.h>

/**
 * _printf - produces output according to a format
 * @format: is a character string.
 * The format string is composed of zero or more directives
 * Return: the number of characters printed, excluding '\0'
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL || (*format == '%' &&  *(format + 1) == '\0'))
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			count += _putchar(*format);
			format++;
		}
		else
		{
			if (*(format + 1) == '\0')
				break;

			if (*(format + 1) == 'c')
			{
				count += _putchar(va_arg(args, int));
				format += 2;
			}
			else if (*(format + 1) == 's')
			{
				count += _print_str(va_arg(args, char *));
				format += 2;
			}
			else if (*(format + 1) == '%')
			{
				count += _putchar('%');
				format += 2;
			}
		}
	}
	va_end(args);
	return (count);
}
