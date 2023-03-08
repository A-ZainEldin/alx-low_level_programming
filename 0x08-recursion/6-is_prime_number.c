#include "main.h"
/**
 * test- tests function
 * @factor:factors
 * @tests:manx
 * Return:number
 */
int test(int factor, int tests)
{
	if (tests % factor == 0)
	{
		if (factor == tests)
			return (1);
		return (test(factor + 1, tests));
	}
	return (0);
}
/**
 * is_prime_number- does get square root
 * @n: the number needed
 * Return: the value desired from root or -1
 */
int is_prime_number(int n)
{
	return (test(1, n));
}
