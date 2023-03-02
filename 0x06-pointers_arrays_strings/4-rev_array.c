#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp[n];
	int i;
	int val;

	i = 0;
	val = n;

	while (i < n)
	{
		temp[i] = a[n];
		i++;
		n--;
	}
	i = 0;

	while (i < n)
	{
		a[i] = temp[n];
	}
}
