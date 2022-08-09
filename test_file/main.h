#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
typedef struct op
{
        char op;
        int (*f)(va_list args);
} op_t;
int (*selector(char s))(va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_modulus(va_list args);

#endif /* MAIN_H */
