#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
/**
 * struct op - structure containing a character and
 * a pointer to a function
 * @op: indicator character
 * @f: pointer to selected function
 **/
typedef struct op
{
	char *op;
	int (*f)(va_list args);
} op_t;
int (*selector(char s))(va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_modulus(va_list args);
int print_number(va_list args);
int print_binary(va_list args);
int print_rev(va_list args);
int print_x(va_list args);
void print_lowerHex(unsigned int num, int *count);
int print_X(va_list args);
void print_upperHex(unsigned int num, int *count);
int recursivePrintNum(int num);
int print_u(va_list args);
int rot13(va_list args);
int _strlen(char *str);

#endif /* MAIN_H */
