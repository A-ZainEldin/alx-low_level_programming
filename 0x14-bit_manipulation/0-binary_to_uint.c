#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint- converts between number types
 * @b: a pointer
 * Return: a number
 */
unsigned int binary_to_uint(const char *b)
{
	int flag = 0, i;
	unsigned int sum = 0;

	if (!b)
		return (0);

	for (i =  0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		sum = 2 * sum + (b[i] - '0');
	}
	return (sum);
}
