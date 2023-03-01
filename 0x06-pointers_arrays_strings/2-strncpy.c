#include "main.h"
/**
 * _strncpy- coppies string
 * @dest: input
 * @src: string
 * @n: indecator
 * Return: always a string
 */

char *_strncpy(char *dest, const char *src, int n)
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
