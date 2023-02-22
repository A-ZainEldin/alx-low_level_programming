#include"main.h"

/**
 * print_alphabet - this program prints lowercase letters only
 *
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x < 123)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
