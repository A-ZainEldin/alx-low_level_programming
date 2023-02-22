#include"main.h"
/**
 * print_last_digit - does what it says
 * @Z:does his task
 * Return: always a real number
 */
int print_last_digit(int Z)
{
	int a;
	if (Z < 0)
		Z = -Z;
	a = Z % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
		return (a);


}
