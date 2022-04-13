#include "3-calc.h"
#include <stdio.h>

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
	
	while (ops[i].op =! NULL)
	{
		if (*ops[i].op == *s)
		{
			return ops[i].f;
		}
		i++;
	}
	return (NULL);
}
