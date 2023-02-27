#include "main.h"
/**
 *char*_strcpy - a function that copies the string pointed to by src
 *@dest: copy to
 *@src: copy from
 *Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int sum;
	int x;

	i = 0;
	sum = 0;
	x = 0;

	while (src[i] != '\0')
	{
		sum = sum + 1;
		i++;
	}
	for ( ; x < sum ; x++)
	{
		dest[x] = src[x];
	}
	dest[sum] = '\0';
	return (dest);

}
