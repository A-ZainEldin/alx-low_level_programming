#include "main.h"
/**
 * check - recursively checks if a number is prime
 * @factor: the factor to be tested
 * @number: the number to be checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int check(int factor, int number)
{
	if (number < 2 || number % factor == 0)
		return (0);
	else if (factor > number / 2)
		return (1);
	else
		return (check(factor + 1, number));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to be checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
