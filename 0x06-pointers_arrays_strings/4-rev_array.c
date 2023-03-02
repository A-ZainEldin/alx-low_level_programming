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
	int temp;
	int i;
	int val;

	i = 0;
	val = n - 1;

	while (i < val)
	{
		temp = a[i];
		a[i] = a[val];
		a[val] = temp;
		i++;
		val--;
	}
}
