#include "main.h"
/**
 * _puts - writes a string to stdout
 * @s: The string to write
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
