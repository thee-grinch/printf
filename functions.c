#include <unistd.h>

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
 * args: the argument list
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

	if (string == NULL || *string == '\0')
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
/**
 * print_percent - prints a percentage sign
 * Return: always
 */
int print_percent(void)
{
	_putchar('%');
	return (1);
}

