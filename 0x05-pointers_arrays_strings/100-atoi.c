#include "main.h"
/**
 * _atoi - used to convert string to integer
 * @s: string to be converted
 * for - loop to interate over string
 * if - condition tb checked
 *
 * Return: integer if number is found, 0 otherwise
 */
int _atoi(char *s)
{
int i, sign, num;
i = 0;
num = 0;

while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
{
	if (s[i] == '-')
		sign *= -1;
	i++;
}
while ((s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
{
	num = (num * 10) + (s[i] - '0');
}
num *= sign;
return (num);
}

