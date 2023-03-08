#include "main.h"
/**
 * _strlen_recursion -how long is string??
 * @s :string start
 * Return :an int
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return(1+_strlen_recursion(&(s[1])));
	}
	else
	return (0);
}
