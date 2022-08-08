#include "main.h"

/**
 * print_char - prints a character in the format string
 * Description:
 * Return: 1
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - prints a character in the format string
 * Description:
 * Return: 1
 */

int print_string(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_char - prints a character in the format string
 * Description:
 * Return: 1
 */

int print_modulus(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
