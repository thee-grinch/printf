#include <stdio.h>
#include "main.h"
/**
 * main - tests a printf function
 * Return:0
 */
int main(void)
{
	int lenA, lenB, lenC, lenD, lenE, lenF, lenG, lenH, lenI, lenJ, lenK, lenL, lenM, lenN;
	int lenO, lenP;
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
	lenG = printf("%d\n", 0x123);
	lenH = _printf("%d\n", 0x123);
	printf("Printf: %d Mine: %d\n", lenG, lenH);
	lenI = printf("%i\n", 0x123);
	lenJ = _printf("%i\n", 0x123);
	printf("Printf: %i Mine: %i\n", lenI, lenJ);
	lenK = printf("%d\n", 1024);
	lenL = _printf("%d\n", 1024);
	printf("Printf: %i Mine: %i\n", lenK, lenL);
	lenM = printf("%d\n", 0);
	lenN = _printf("%d\n", 0);
	printf("Print: %i Mine: %i\n", lenM, lenN);
	lenO = printf("%b\n", 13);
	lenP = _printf("%b\n", 13);
	printf("Print: %i Mine: %i\n", lenO, lenP);
	return (0);
}
