#include "main.h"
#include<string.h>
/**
 * puts2 - entry for main code block
 * @str: string to be checked
 * i, len - varibales store integers
 * for - iterates over string
 * _putchar - print integers
 *
 *
 */
void puts2(char *str)
{
int i, len;
len = strlen(str);
i = len;
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
