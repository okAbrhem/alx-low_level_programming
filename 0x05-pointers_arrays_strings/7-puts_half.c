#include "main.h"
#include<string.h>
/**
 * puts_half - entry for code block
 * @str: string to be checked
 * i, j, len, n - variables to hold integers
 * if - checks for odd/evenness of string length
 * for - iterates of string
 *
 */
void puts_half(char *str)
{
int i, len, j;

len = strlen(str);

if (len / 2 != 0)
{

j = (len + 1) / 2;
}
else
{
j = len / 2;
}
for (i = j; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
