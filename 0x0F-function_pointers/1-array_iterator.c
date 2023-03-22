#include "function_pointers.h"
#include <stdio.h>
/**
 * arrray_iterator - does funciotn on array
 * @array : the array we usin
 * @size : the size of it
 * @action : the thing needed to get done
 * Return : always void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i<size; i++)
	{
		action(array[i]);
	}
}
