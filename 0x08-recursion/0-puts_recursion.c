#include "main.h"
/**
 * _puts_recursion - a function that prints a string
 * @s : the addres of the first character of the string
 * Return : always 0
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(&(s[1]));

}
