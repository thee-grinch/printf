#include <stdarg.h>
#include "main.h"
/**
 * count_digits - count digits of given strings
 * @n: the digits to be counted
 * Return: the number of digits
 */
int count_digits(long int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}
/**
 * print_number - prints a number
 * @n: the number to be printed
 */
void print_number(long int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
/**
 * array_reverse - reverses an array
 * @a: the array
 * @n: the size
 */
void array_reverse(char *a, unsigned int size)
{
	unsigned int i, j;
	char buffer;

	j = size - 1;
	for (i = 0; i < size / 2; i++)
	{
		buffer = a[i];
		a[i] = a[j];
		a[j] = buffer;
		j--;
	}
}
/**
 * convert_base - converts a number to different bases
 * @n: the numbe to be converted
 * @b: the base
 * Return: the converted number char pointer
 */
char *convert_base(unsigned int n, unsigned int b)
{
	char *s = "0000000000000000000000000000000";
	unsigned int i, rem;

	while (n)
	{
		rem = n % b;
		rem /= b;
		s[i++] = rem + '0';
	}
	s[i] = '\0';
	array_reverse(s, i);
	return (s);
}
int print_binary(va_list args)
{
	unsigned int bin = va_arg(args, unsigned int);
	int count;
	char *s;

	s = convert_base(bin, 2);
	count = _puts(s);
	return (count);
}
/**
 * _puts - acts as puts
 * @s: the string pointer
 * Return: the number of bytes printed
 */
int _puts(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
