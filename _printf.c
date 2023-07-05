#include "main.h"
#include <stdarg.h>
/**
 * _printf - is a simple printf function
 * @format: the format string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				count += print_char(args);
			if (format[i + 1] == 's')
				count += print_string(args);
			if (format[i + 1] == '%')
				count += print_percent();
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
