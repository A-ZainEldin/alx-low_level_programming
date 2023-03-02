#include"main.h"

/**
 * _strncat- does casting
 * @dest: the main
 * @src: the cocatenated
 * @n: the amount
 * Return: always a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
