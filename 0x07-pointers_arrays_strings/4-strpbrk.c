#include"main.h"
/**
 *_strpbrk- gets the length of a prefix substring
 *@s: the string to be searched
 *@accept: the string containing the characters to match
 *Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');

}
