#include "main.h"
/**
 * is_identical - compares two strings and returns 1
 * if they are identical, 0 otherwise
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0.
 */
int is_identical(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (is_identical(s1 + 1, s2 + 1));
	else
		return (0);
}
