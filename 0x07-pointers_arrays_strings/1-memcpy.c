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
	int z = n;

	for (i = 0; i < z; i++)
	{
		dest[i] = src[i];
		n--
	}
	return (dest);
}
