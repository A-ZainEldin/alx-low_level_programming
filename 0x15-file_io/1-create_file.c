#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: the string of the name.
 * @text_content: what to write in file.
 * Return: If the function fails -1 or 1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int file, x, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(file, text_content, length);

	if (file == -1 || x == -1)
		return (-1);

	close(file);

	return (1);
}
