#include "main.h"
#include <stdlib.h>
/**
 *_strdup- a function that copies a tring
 *@str: the string that needs to be coppied
 *Return: either a pointer or null
 */
char *_strdup(char *str)
{
	if (str != NULL)
	{
		int i, j;
		char *ns;

		for (i = 0; str[i] != '\0'; i++)
			j = i + 1;
		ns = malloc((j + 1) * sizeof(char));
		if (ns != NULL)
		{
			for (i = 0; str[i] != '\0'; i++)
				ns[i] = str[i];
			ns[j] = '\0';
			return (ns);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
