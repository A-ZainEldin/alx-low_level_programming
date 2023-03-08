#include "main.h"
/**
 * _puts_recursion - a function that prints a string
 * @s : the addres of the first character of the string
 * Return : always 0
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(&(s[i+1]));

}
