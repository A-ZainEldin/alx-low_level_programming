#include "main.h"
/**
 * _strlen - finds the length of a string
 * @s: pointer to string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen(s + 1) + 1);
}

/**
 * _is_palindrome - helper function to check if a string is a palindrome
 * @s: pointer to string
 * @i: start index
 * @j: end index
 *
 * Return: 1 if the string is a palindrome, 0 if not
 */
int _is_palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	else if (s[i] != s[j])
		return (0);
	else
		return (_is_palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string
 *
 * Return: 1 if the string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (_is_palindrome(s, 0, len - 1));
}
