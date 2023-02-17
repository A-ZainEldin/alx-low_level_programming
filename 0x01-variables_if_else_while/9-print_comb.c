#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - this is main discription
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int x;
x = 0;
while (x < 10)
{
	if (x < 9)
	{
		printf("%d, ", x);
		x++;
	}
	else
	{
		printf("%d", x);
		x++;
	}
}
putchar('\n');
return (0);
}
