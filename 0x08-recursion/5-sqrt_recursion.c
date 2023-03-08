#include "main.h"
/**
 * test- tests function
 * @factor:factors
 * @max:tests
 * Return:number
 */
int test(int factor, int tests)
{
	if (factor * factor == tests)
	{
		return (factor);
	}
	else if (factor * factor > tests)
	{
		return (-1);
	}
	else
		return (test(factor+1,tests));
}
/**
 * _sqrt_recursion- does get square root
 * @n: the number needed
 * Return: the value desired from root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	else
	return (test(1,n));
}
