#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and prints its content.
 * @filename: text file desired to be read
 * @letters: letters desired to be read
 * Return: bytes read and printed or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *toread;
	ssize_t file;
	ssize_t s;
	ssize_t t;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	toread = malloc(sizeof(char) * letters);
	t = read(file, toread, letters);
	s = write(STDOUT_FILENO, toread, t);

	free(toread);
	close(file);
	return (s);
}
