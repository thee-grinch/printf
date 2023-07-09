#include "main.h"
#include <stdarg.h>
/**
 * _printf - is a simple printf function
 * @format: the format string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	char buffer[1024];
	int j = 0;
	int i, count = 0;
	va_list args;

	if (!format)
		return (0);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{

		if (format[i] == '%')
		{
			i++;
			count += print_buffer(buffer, j);
			count += getfunc(format[i], args);
		}
		else
		{
			buffer[j++] = format[i];
		}
	}
	if (j != 0)
		count += print_buffer(buffer, j);
	va_end(args);
	return (count);
}
