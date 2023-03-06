#include "main.h"
/**
 *_memcpy-copies a string to other
 *@dest: start string
 *@src: where we get string
 *@n: when we stop
 *Return: the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
