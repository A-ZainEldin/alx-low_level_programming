#include"main.h"
/**
 * swap_int - swaps the value of 2 integers
 * @a: the first pointer passed
 * @b: the second pointer passed
 * Return : Always 0
 */
void swap_int(int *a, int *b)
{
	int saver;

	saver = *a;
	*a = *b;
	*b = saver;
}
