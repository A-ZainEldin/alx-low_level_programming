#include "main.h"
/**
 * factorial -the number in its lowers
 * @n :the number passed
 * Return :Always a number
 */
int factorial(int n)
{
	if (n > 0)
	{
		return(n * factorial(n-1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (-1);
}
