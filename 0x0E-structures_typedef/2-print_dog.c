#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints elements of a dog
 * @d: parameters of dog
 *
 *
 *Return: nothing
 *
 */

void print_dog(struct dog *d)
{

	if ((*d).name == NULL)
	{
		print("(nil)");
	}
	if ((*d).age == NULL)
	{
		print("(nil)");
	}

	if ((*d).owner == NULL)
	{
		print("(nil)");
	}

	printf("%s\n", (*d).name);
	printf("%d\n", (*d).age);
	printf("%s\n", (*d).owner);
	return (0);
}
