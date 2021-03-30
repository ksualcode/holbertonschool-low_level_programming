#include "holberton.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: the file
* @letters: ammount of characters
*
* Return: printed POSIX
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp = 0;
	ssize_t count = 0, found = 0;
	char *store;

	if (!filename)
		return (0);

	store = malloc(sizeof(char) * letters);
	if (!store)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		free(store);
		return (0);
	}

	found = read(fp, store, letters);
	if (found != -1)
	{
		count = write(STDOUT_FILENO, store, found);
		if (count == -1)
			return (0);
	}

	close(fp);
	free(store);

	return (count);
}
