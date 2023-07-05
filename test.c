#include <stdio.h>
#include "main.h"
/**
 * main - tests a printf function
 * Return:0
 */
int main(void)
{
	int lenA, lenB, lenC, lenD, lenE, lenF;
	char c = 'c';
	char *str = "Mordecai Muvandi is redoing the tasks again";
	lenA = printf("lets try to print a simple sentence\n");
	lenB = _printf("lets try to print a simple sentence\n");
	printf("Printf: %d Mine: %d\n", lenA, lenB);
	lenC = printf("string: %s\n", str);
	lenD = _printf("string: %s\n", str);
	printf("Printf: %d Mine: %d\n", lenC, lenD);
	lenE = printf("%c %c\n", c, 'M');
	lenF = _printf("%c %c\n", c, 'M');
	printf("Printf: %d Mine: %d\n", lenE, lenF);
	return (0);
}
