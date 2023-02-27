#include "main.h"
/**
 * _puts - gives length of passed string
 *@str: the string passed
 *Return: Always a void
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n')
}
