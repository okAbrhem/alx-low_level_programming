#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads and print a text file
 * @filename: file to be read and write
 * @letters: number of letters to be read and write
 * Return: actual numberof letters, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t file, letter, word;
	char *txt;

	txt = malloc(letters);

	if (txt == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(txt);
		return (0);
	}

	letter = read(file, txt, letters);

	word = write(STDOUT_FILENO, txt, letter);

	close(file);

	return (word);
}
