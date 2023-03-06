#include "main.h"
/**
 * print_diagsums - Prints the sum of the two diagonals
 * @a: A pointer to the first element of the matrix
 * @size: The size of the matrix
 *
 * Return: void (no return value).
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}


	printf("%d, %d\n", sum1, sum2);
}
