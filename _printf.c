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

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			printed += selector(format[i + 1])(args);
			i++;
			continue;
		}

		_putchar(format[i]);
		printed++;
	}
	va_end(args);

	/* printf("----------------------------------\nPrinted: %d\n", printed);*/
	return (printed);
}
