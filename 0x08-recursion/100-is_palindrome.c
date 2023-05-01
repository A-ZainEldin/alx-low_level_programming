#include "main.h"
/**
 *is_palindrome- works if the function had a palindrome
 *@s: a pointer to the string
 *Return: zero if false and one if true
 */
int is_palindrome(char *s)
{
	int c = 0;
	int x = 0,i = 0;

	for (i; s[i] != '\0'; i++)
		c++;
	c -= 1;
	while (x != c)
	{
		if (s[x] != s[c])
			return (0);
		x++;
		c--;
	}
	return (1);
}
