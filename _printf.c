#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string.
 * The format string is composed of zero or more directives
 * Return: the number of characters printed, excluding '\0'
 */
int _printf(const char *format, ...)
{
	va_list args_list;
	int char_cnt = 0;

	va_start(args_list, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			char_cnt += _putchar(*format);
			format++;
		}
		else if ((*format == '%') && (*(format + 1) != '\0'))
		{
			format++;
			switch (*format)
			{
				case 'c':
					char_cnt += _putchar(va_arg(args_list, int));
					break;
				case 's':
					char_cnt += _print_str(va_arg(args_list, char*));
					break;
				case '%':
					char_cnt += _putchar('%');
					break;
				default:
					char_cnt += _putchar(*format);
					break;
			}
			format++;
		}
	}
	va_end(args_list);
	return (char_cnt);
}
