#include "main.h"

/**
 * main - main block
 * Description:
 * Return: Always 0 (Success).
 */

int (*selector(char s))(va_list args)
{
        int i = 0;
        op_t ops[] = {
                {'c', print_char},
                {'s', print_string},
                {'%', print_modulus},
                {'\0', NULL}
        };

        for (i = 0; ops[i].op; i++)
        {
                if (s == ops[i].op)
                	return (ops[i].f);
        }

        return (NULL);
}
