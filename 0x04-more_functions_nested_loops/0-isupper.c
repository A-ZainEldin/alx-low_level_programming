#include"main.h"

/**
 * _isupper - checks if the number givven is ubber
 * @c:the number given
 * Return:is always one or zero
 */
int _isupper(int c)
{
	if (c > 90 || c < 65)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
