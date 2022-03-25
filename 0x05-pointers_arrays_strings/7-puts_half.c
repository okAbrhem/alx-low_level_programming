#include "main.h"
#include<string.h>
/**
 *
 *
 *
 *
 *
 */
void puts_half(char *str)
{
int i, len;
len = strlen(str);

for (i = 0; i <= len; i++)
{
	if ((len / 2) != 0)
	{
	_putchar(str[((len - 1) / 2)++]);
	}
	else
	{
	_putchar(str[(len / 2)++]);
	}
}
}
