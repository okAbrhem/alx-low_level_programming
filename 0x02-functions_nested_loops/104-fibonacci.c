#include <stdio.h>
/**
 * main - prints the first 98 fiboncci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int a, b, c, d, e, f, g, h, i, j, k;

	a = 1;
	b = 2;
	c = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);

	for (d = 3; d < 89; d++)
	{
		printf("%lu", c);
		a = b;
		b = c;
		c = a + b;
	}
	e = b / 1000000000;
	f = b % 1000000000;
	g = c / 1000000000;
	h = c % 1000000000;

	for (e = 89; e < 98; e++)
	{
		printf("%lu%lu, ", c1, c2)

		i = e;
		j = f;
		e = g;
		f = h;

		g = i + e + ((j + f) / 1000000000);
		h = (j + f) % 1000000000;


	}
	printf("%lu%lu\n", g, h);
	return (0);
}
