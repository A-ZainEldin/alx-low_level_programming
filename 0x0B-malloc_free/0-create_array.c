#include "main.h"
#include <stdlib.h>
/**
 *create_array- creates an array that starts with a given string
 *@size: gives the size of the desired array
 *@c: gives the starting character
 *Return: is always a pointer to the starting of the array]
 */
char *create_array(unsigned int size, char c)
{
	if (size != 0)
	{
		char *arr;
		int i;

		arr = malloc(size * sizeof(*arr));
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
				arr[i] = c;
			return (arr);
		}
	}
	else
		return (NULL);

}
