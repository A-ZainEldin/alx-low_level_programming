#include"main.h"
/**
 * prints code 10 times
 * prints a line
 */
void print_alphabet_x10(void)
{	
	char z = 'a';
	int x = 0;

	while (x < 10)
	{
		while (z < 123)
		{
			_putchar(z);
			z++;
		}
		x++;
		z = 'a';
	}
}
