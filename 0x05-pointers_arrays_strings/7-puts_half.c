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
	if (sum % 2 == 0)
	{
		stop = (sum / 2) - 1;
	}
	else
	{
	stop = ((sum + 1) / 2) - 1;
	}
	i = sum;
	while (stop != i - 1)
	{
		_putchar(str[stop + 1]);
		stop++;
	}
	_putchar('\n');
}
