#include "main.h"
/**
 * _strlen - gives length of passed string
 *@s: the string passed
 *Return: Always an integer
 */
int _strlen(char *s)
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
	return (sum);
}
