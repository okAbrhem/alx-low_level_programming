#include "variadic_functions.h"
#include <stdio.h>
/**
 *
 *
 *
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char c;
	char *s;
	int i;
	float f;

	va_start(list, format);


	while (va_arg(list, char, int, float, char *))
	{
		s = va_arg(list, char *);

		if (s == '\0')
		{
			printf("(nil)");
		}

	}
}
