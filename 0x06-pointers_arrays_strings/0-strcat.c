#include"main.h"
/**
 * _strcat- a function that joins 2 strings
 * @dest: what is appended to
 * @src: what is being appended
 * Return: a ponter
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
