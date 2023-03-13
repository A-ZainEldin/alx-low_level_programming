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

		arr = malloc(size * sizeof(*arr));
		if (arr == NULL)
			return (NULL);
		else
			return (arr);
	}
	else
		return (NULL);

}
