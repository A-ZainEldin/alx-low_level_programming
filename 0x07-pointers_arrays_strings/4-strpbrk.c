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
	char *p;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
