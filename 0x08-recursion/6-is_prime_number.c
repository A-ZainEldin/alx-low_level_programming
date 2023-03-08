#include "main.h"
/**
 * find_max_factor - recursively finds the maximum factor
 * @n: the number to be checked
 * @factor: the factor to be tested
 *
 * Return: the maximum factor
 */
int find_max_factor(int n, int factor)
{
	if (factor * factor > n)
	{
		return (factor - 2);
	}
	return (find_max_factor(n, factor + 2));
}

/**
 * test - recursively checks if a number is prime
 * @factor: the factor to be tested
 * @tests: the number to be checked
 * @max_factor: the maximum factor to be tested
 *
 * Return: 1 if prime, 0 otherwise
 */
int test(int factor, int tests, int max_factor)
{
	if (factor > max_factor)
	{
		return (1);
	}
	if (tests % factor == 0)
	{
		return (0);
	}
	return (test(factor + 2, tests, max_factor));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to be checked
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	int max_facto;

	max_factor = find_max_factor(n, 1);
	return (test(3, n, max_factor));
}
