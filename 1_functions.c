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
