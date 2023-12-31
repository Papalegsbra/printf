#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string.
 * The format string is composed of zero or more directives
 * Return: the number of characters printed, excluding the null byte
 */
int _printf(const char *format, ...)
{
	int char_cnt = 0;
	va_list args_list;

	if (format == NULL || (*format == '%' && *(format + 1) == '\0'))
		return (-1);
	va_start(args_list, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			char_cnt += _putchar(*format);
		}
		else
		{
			if (*(format + 1) == '\0' || *(format + 1) == ' ')
				return (-1);
			format++;
			if (*format == 'c')
				char_cnt += _putchar(va_arg(args_list, int));
			else if (*format == 's')
				char_cnt += _print_str(va_arg(args_list, char *));
			else if (*format  == '%')
				char_cnt += _putchar('%');
			else if (*format == 'd' || *format == 'i')
				char_cnt += _print_number(va_arg(args_list, int));
			else
			{
				char_cnt += _putchar('%');
				char_cnt += _putchar(*format);
			}
		}
		format++;
	}
	va_end(args_list);
	return (char_cnt);
}
