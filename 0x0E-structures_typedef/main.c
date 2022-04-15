#include <stdio.h>
#include "dog.h"
/**
 * main - prints dog struct
 *
 * Return: 0 Success
 */
int main (void)
{
	struct dog my_dog;

	my_dog.name = "";
	my_dog.age = 0;
	my_dog.owner = "";
	print_dog(&my_dog);
	return (0);
}
