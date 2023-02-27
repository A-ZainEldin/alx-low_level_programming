#include "main.h"
/**
 *rev_string - gives length of passed string
 *@s: the string passed
 *Return: Always none
 */
void rev_string(char *s)
{
	int i;
	int sum;
	int j;

	i = 0;
	sum = 0;
	j = 0;

	while (s[i] != '\0')
	{
		sum = sum + 1;
		i++;
	}
	const int test = sum;

	char var[test];

	i = sum;
	while (i != 0)
	{
		var[j] = s[i - 1];
		i--;
		j++;
	}
	i = 0;

	while (s[i] != '\0')
	{
		s[i] = var[i];
		i++;
	}
	_putchar('\n');
}
