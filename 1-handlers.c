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
