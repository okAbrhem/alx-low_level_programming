#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - data about dog using struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dogy;
#endif