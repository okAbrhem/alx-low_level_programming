#include "main.h"
#include <stdio.h>
#include <stdlib.h>



/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: arguemnt vector
 *
 * Return: 0
 */



int main(int argc, char *argv[])

{
	int i;
	int j;
	int cents = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (j / coins[i] > 0)
		{
			cents += j / coins[i];
			j = j % coins[i];
		}
	}
	printf("%d\n", cents);
	return (0);
}
