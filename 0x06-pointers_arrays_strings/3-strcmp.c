#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: first string
 * @s2: second string
 * while - loop iterates over some condition
 *
 * Return: difference of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		return (s1[i] - s2[i]);
	}
}
