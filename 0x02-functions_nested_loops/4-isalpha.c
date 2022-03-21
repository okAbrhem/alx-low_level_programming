#include "main.h"

/**
 * _isalpha - checks if letter, lowercase or uppercase
 * @c: character to be checked
 * if - conditional statement that checks for alphabets
 *
 *
 *
 *Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
return (0);
}
}
