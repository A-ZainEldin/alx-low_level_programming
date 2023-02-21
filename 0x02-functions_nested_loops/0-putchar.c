#include"main.h"

/**
 * main - print a word
 *
 * return : Always 0.
 */
int main(void)
{
	int x= 0;
	char string[]="_putchar";
	while (x<8)
	{
		_putchar(string[x]);
		x++;
	}
	_putchar('\n');
	return (0);
}
