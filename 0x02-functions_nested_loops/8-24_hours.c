#include"main.h"
/**
 * jack_bauer - this function is useless
 * Return: Always 0
 */
void jack_bauer(void)
{
	int x,y;
	x = 0;
	while (x < 24)
	{
		y = 0;
		while( y < 60)
		{
			_putchar((x/10) + '0');
			_putchar((x%10) + '0');
			_putchar(':');
			_putchar((x/10)+'0');
			_putchar((x%10)+'0');
			_putchar('\n');
			y++
		}
		x++
		}
}

