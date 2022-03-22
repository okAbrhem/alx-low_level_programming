#include "main.h"
/**
 * _strlen - evaluates lenght of a string
 * @s: character to be checked
 * while - loop to iterate over the string
 * lenght - integer vaiable to store lenght of string
 *
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
int length = 0;

while (*s++)
{
length++;
}
return (length);
}
