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
char y;
y = 'a';
x = 0;

while (x < 10)
{
	printf("%d", x);
	x++;
}

while (y <= 'f')
{
	printf("%c", x);
	y++;
}
putchar('\n');
return (0);
}
