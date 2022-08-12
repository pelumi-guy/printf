#include "main.h"
/**
* print_u - prints unsigned ints
* @args: the args list
*
* Return: chars printed or -1
*/
int print_u(va_list args)
{
int argNum = (va_arg(args, int));
unsigned int num;
int len = 0;

if (argNum < 0)
{
num = -argNum;
}
else if (argNum == 0)
{
_putchar('0');
return (1);
}
else
{
num = argNum;
}

len += recursivePrintNum(num);

return (len);
}
