#include "main.h"
/**
 * puts2 - gives length of passed string
 * @str : the string passed
 * Return : Always a void
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
