#include "3-calc.h"
#include <stdio.h>

/**
 * main - prints result
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	char *op;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = argv[2];

	f = get_op_func(op);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((op[0] == '/' || op[0] == '%') && (op[1] == '\0' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(num1, num2));

	return (0);
}
