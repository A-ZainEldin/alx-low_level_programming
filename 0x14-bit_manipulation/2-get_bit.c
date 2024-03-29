#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: the number
 * @index: the index to go
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
