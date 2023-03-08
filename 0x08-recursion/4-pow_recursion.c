#include "main.h"
/**
 * _pow_recursion -powers a number
 *@x:base
 *@y:power
 *Return: always int
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	else if (y == 0)
	return (1);
	else
	return (-1);
}
