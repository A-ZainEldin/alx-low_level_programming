#include "main.h"
/**
 *_strstr-locates a substring within a string
 *@haystack:the string to search in
 *@needle:the substring to search for
 *
 *Return:a pointer to the beginning of the substring, or NULL if the substring
 *        is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);

}
