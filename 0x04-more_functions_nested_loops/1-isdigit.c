#include "main.h"

/**
 * _isdigit - tells if something is numbe
 * @c: something
 * Return: number
 */

int _isdigit(int c)
{
	if (c > 57 || c < 38)
	{
		return (0);
	}
	return (1);
}
