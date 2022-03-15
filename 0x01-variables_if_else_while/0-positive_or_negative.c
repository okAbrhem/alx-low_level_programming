#include <stdlib.h>

#include <time.h>

#include<stdio.h>


/**
 * main - Entry point
 * n - random number
 *
 * srand - random number generator based on n and time function
 * RAND_MAX - maximum random number
 * Return: Always 0 (Success)
 */


int main(void)
{

	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;



	if (n > 0)

	{										printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);							}
	else
	{										printf("%d is negative\n", n);
	}

	return (0);

}
