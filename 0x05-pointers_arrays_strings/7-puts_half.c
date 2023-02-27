#include "main.h"
/**
 * puts_half - gives length of passed string
 *@str: the string passed
 *Return: Always an integer
 */
void puts_half(char *str)
{
	int i;
	int sum;
	int stop;

	i = 0;
	sum = 0;

	while (str[i] != '\0')
	{
		sum = sum + 1;
		i++;
	}
	stop = (sum / 2) - 1;
	i = sum;
	while (stop != i )
	{
		_putchar(str[stop ]);
		stop++;
	}
	_putchar('\n');
}
