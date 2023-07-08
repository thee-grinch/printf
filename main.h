#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int _printf(const char *format, ...);
int print_int(va_list args);
int count_digits(long int n);
void print_number(long int n);
void array_reverse(char *a, unsigned int size);
char *convert_base(unsigned int n, unsigned int b);
int print_binary(va_list args);
int _puts(char *s);

#endif
