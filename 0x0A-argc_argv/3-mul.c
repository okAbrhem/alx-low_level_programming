#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints multiplication of two arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul, i, num1, num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (i == 1)
			{
				num1 = atoi(argv[i]);
			}
			else if (i == 2)
			{
				num2 = atoi(argv[i]);
			}
		}
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
