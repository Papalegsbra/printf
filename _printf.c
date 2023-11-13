#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string.
 * The format string is composed of zero or more directives
 * Return: the number of characters printed, excluding the null byte
 */
int _printf(const char *format, ...)
{
	va_list args_list;
	int char_cnt = 0;

	va_start(args_list, format);
	if (format == NULL || (*format == '%' && *(format + 1) == '\0'))
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			char_cnt += _putchar(*format);
			format++;
		}
		else
		{
			if (*(format + 1) == '\0')
				break;
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
					break;
			}
			format++;
		}
	}
	va_end(args_list);
	return (char_cnt);
}
