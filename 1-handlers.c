#include "main.h"
/**
* print_char - prints a character in the format string
* Description:
* @args: array of arguments
* Return: 1
*/

int print_char(va_list args)
{
_putchar(va_arg(args, int));
return (1);
}

/**
* print_modulus - handles the percentage character
* Description:
* @args: array of arguments
* Return: length of strings
*/
int print_modulus(va_list args __attribute__((unused)))
{
_putchar('%');
return (1);
}

/**
* print_rev - function to print reversed string
* Description:
* @args: Array of variadic arguments
* Return: lenght of string printed
**/
int print_rev(va_list args)
{
	int i, j, len = 0;
	char *s = (va_arg(args, char *));

	if (s == NULL)
		s = "(null)";

	for (i = 0; *(s + i); i++)
		len++;

	for (j = (len - 1); j >= 0; j--)
		_putchar(*(s + j));

	return (len);
}

