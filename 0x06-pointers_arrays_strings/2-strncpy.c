#include "main.h"
/**
 * _strncpy - Copies the first n characters of the string pointed
 *             to by src, to the buffer pointed to by dest.
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string to be copied.
 * @n: The maximum number of characters to be copied from src.
 *
 * Return: A pointer to the destination buffer dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
