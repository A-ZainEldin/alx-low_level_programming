#include "main.h"
/**
 *_strchr-searches for the first occurence of a character
 *@s:the string we search in
 *@c:the character searched for
 *Return:the occurence or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
