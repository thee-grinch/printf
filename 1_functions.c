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
 * convert_base - converts a number to different bases
 * @n: the numbe to be converted
 * @b: the base
 * Return: the converted number char pointer
 */
int convert_base(unsigned int n, unsigned int b, char *s)
{
	int index;
	unsigned int rem;
	
	if (n == 0)
	{
		s[0] = '0';
		return (1);
	}
	for (index = 0; n > 0; index++)
	{
		rem = n % b;

		if (rem < 10)
		{
			s[index] = rem + '0';
		}
		else
			s[index] = 'A' + (rem - 10);
		n /= b;
	}
	return (index);
}
/**
 * print_converted - prints the converted number
 * @s: the converted number string
 * @size: the string size
 */
void print_converted(char *s, int size)
{
	int i;

	for (i = size - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
/**
 * print_binary - prints a string in binary
 * @args: the argument
 * Return: the number of bits
 */
int print_binary (va_list args)
{
	unsigned int binary = va_arg(args, unsigned int);
	int count;
	char s[32];
	
	count = convert_base(binary, 2, s);
	print_converted(s, count);
	return (count);
}
