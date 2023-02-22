#include"main.h"

/**
 * _abs - is a function that gets absolute value of a number
 * Return: is integer type
 * @A : the integer value evaluated
 */

int _abs(int A)
{
	int x = A;

	if (x > 0)
	{
		return (x);
	}
	else
		return (-x);
}
