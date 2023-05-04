#include "main.h"

/**
 * set_bit - sets a bit to 1
 * @n: pointer
 * @index: index of the bit
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ( (1 << index) | *n);
	return (1);
}
