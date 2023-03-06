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
	int j, i, indx;
	char *ptr;

	indx = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + indx] == needle[j])
			{
				if (j == 0)
				{
					ptr = &needle[j];

				}
				indx++;
			}
			else
			{
				indx = 0;
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (ptr);
		}
	}
	return (NULL);
}
