#include "main.h"
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

/**
 * main - prints sum of integer arguments
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			int k = atoi(argv[i]);

			if (k != atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += k;
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
