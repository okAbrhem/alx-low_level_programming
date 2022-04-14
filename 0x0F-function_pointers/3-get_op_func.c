#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - return the selected operator
 * @s: operator to be passed
 *
 * Return: pointer to a function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op)
	{
		if ((s[0] == ops[i].op[0]) && (s[1] == '\0'))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
