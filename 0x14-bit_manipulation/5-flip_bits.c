#include "main.h"

/**
 * flip_bits- count the diffrent number of bits
 * @n: first number
 * @m: second number
 * Return: number of diffrent bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;
	unsigned long int c;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = x >> i;
		if (c & 1)
			num++;
	}

	return (num);
}
