#include "main.h"
#include <stdio.h>


/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */


int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
