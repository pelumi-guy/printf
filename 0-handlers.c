#include "main.h"

/**
 * print_string - prints a character in the format string
 * Description:
 * @args: array of arguments
 * Return: length of string
 */

int print_string(va_list args)
{
	char *str = (va_arg(args, char *));
	int i, len = 0;

	for (i = 0; str[i]; i++, len++)
		_putchar(str[i]);

	return (len);
}

/**
 * recursivePrintNum - prints an integer number recursively
 * Description:
 * @num: Integer to be printed
 * Return: number of characters printed
 */
int recursivePrintNum(int num)
{
	int len = 1;

	if (num / 10)
		len = (1 + (recursivePrintNum(num / 10)));

	_putchar((num % 10) + '0');

	return (len);
}

/**
 * print_number - prints an integer in the format string
 * Description:
 * @args: Array of variadic arguments
 * Return: number of characters printed
 */

int print_number(va_list args)
{
	int argNum = (va_arg(args, int));
	int num, len = 0;

	if (argNum < 0)
	{
		num = -argNum;
		_putchar('-');
		len++;
	}
	else
	{
		num = argNum;
	}

	len += recursivePrintNum(num);

	return (len);
}