/**
 * _printf - A function that works just like the stdio.h printf functionk
 * Description:
 * @format: Format chracter string to be printed
 * Return: The number of characters printed.
 **/

#include "main.h"

int _printf(const char *format, ...)
{
	int i, printed = 0;
	va_list args;
	int (*func)(va_list) = NULL;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			func = selector(format[i + 1]);
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			else if (func == NULL)
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				printed += 2;
				i++;
				continue;
			}
			else
			{
				printed += selector(format[i + 1])(args);
				i++;
				continue;
			}
		}
		_putchar(format[i]);
		printed++;
	}
	va_end(args);
	return (printed);
}
