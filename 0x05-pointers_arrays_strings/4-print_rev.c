#include "main.h"
/**
 *print_rev - gives length of passed string
 *@s: the string passed
 *Return: Always none
 */
void print_rev(char *s)
{
	int i;
	int sum;

	i = 0;
	sum = 0;

	while (s[i] != '\0')
	{
		sum = sum + 1;
		i++;
	}
	i = sum;
	while (i != 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
