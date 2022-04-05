#include "main.h"
/**
 * _atoi - used to convert string to integer
 * @s: string to be converted
 *
 * Return: integer if number is found, 0 otherwise
 */
int _atoi(char *s)
{
	int val, sign;

	val = 0;
	sign = 1;

	while (('-' == (*s)) || ((*s) == '+'))
	{
		if ((*s) == '-')
		{
			sign = sign * -1;
		}
			s++;
	}
	while ((*s >= '0') && (*s <= '9'))
	{
		val = (val * 10) + ((*s) - '0');
		s++;
	}
	return (val * sign);
}
