#include "main.h"
#include <stdio.h>
/**
 * print_array - gives length of passed string
 *@a: the string passed
 *@n: where it stops
 *Return: Always a void
 */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;

		i = 0;

		while (i != n)
		{
			if (i + 1 == n)
			{
				printf("%d", a[i]);
			}
			else
			{
				printf("%d, ", a[i]);
			}
			i++;
		}
	}
	printf("\n");
}
