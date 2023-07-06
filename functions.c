#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_char - prints a char
 *
 * @args: the argument list
 * Return: the character printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
/**
 * print_string -  prints a string
 * @args: the string to be printed
 * Return: the number of characters printed
 */
int print_string(va_list args)
{
	char *string = va_arg(args, char *);
	int i;

	if (!string || *string == '\0')
		return (0);
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	return (i);
}
/**
 * print_percent - prints a percentage sign
 * @args:the argument list
 * Return: always
 */
int print_percent(va_list args)
{
	(void)args;

	_putchar('%');
	return (1);
}
/**
 * print_int - printa a number
 * @args: the integer to be printed
 * Return: count digits
 */
int print_int(va_list args)
{
	int number = va_arg(args, int);
	int digits = 0;

	if (number < 0)
	{
		_putchar('-');
		digits++;
		number = -number;
	}
	digits += count_digits(number);
	print_number(number);
	return (digits);
}

