#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string
 *
 * Return: 1 if the string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = 0;

	/* base case: an empty string is a palindrome */
	if (*s == '\0')
		return (1);

	/* find the length of the string */
	while (s[len] != '\0')
		len++;

	/* check if the first and last characters match */
	if (s[0] != s[len - 1])
		return (0);

	/* call the function recursively on the substring between the first and last characters */
	s[len - 1] = '\0';
	return (is_palindrome(s + 1));
}
