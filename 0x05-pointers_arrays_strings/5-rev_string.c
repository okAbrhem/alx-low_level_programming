#include "main.h"
#include<string.h>
/**
 * rev_string - entry for main code block
 * @s: string to be checked
 * i, len - integers to store values of string length
 * for - lop to iterate over string s
 * if - used to check for empty space
 * _putchar - used to print charatcers
 *
 */
void rev_string(char *s)
{
int i, len;
int j = 0;
len = strlen(s);

for (i = len - 1; i >= 0; i--)
{
	while (j <= len -1)
	{
		_putchar(s[j]);
		j++;
	}
	_putchar('\n');
	_putchar(s[i]);

}
}
