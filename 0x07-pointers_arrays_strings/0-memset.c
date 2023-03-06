#include "main.h"
/**
 *_memset-sets a specific part of string to a specific value
 *@s:is the pointer where string starts
 *@b:is the value that is wanted to be replaced
 *@n:the stopping indecator
 *Return:returns the s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
