#include "main.h"
/**
 * getfunc - returns the function pointer
 * @b: the selector string to be matched
 * @args: the argument strings
 * Return: the number of strings printed
*/
int getfunc(char b, va_list args)
{
	int i;

	char *selectors = "cs%dib";

	int (*functions[6])(va_list args);

	functions[0] = print_char;
	functions[1] = print_string;
	functions[2] = print_percent;
	functions[3] = print_int;
	functions[4] = print_int;
	functions[5] = print_binary;
	for (i = 0; selectors[i] != '\0'; i++)
	{
		if (b == selectors[i])
			return (functions[i](args));
	}
	return (0);
}
/**
 * print_buffer - prints the local buffer
 * @buffer: the buffer to be printed
 * @i: the buffer size;
 * Return: the number of characters printed
 */
int print_buffer(char buffer[], int i)
{
	int j;

	for (j = 0; j < i; j++)
	{
		_putchar(buffer[j]);
	}
	i = 0;
	return (j);
}
