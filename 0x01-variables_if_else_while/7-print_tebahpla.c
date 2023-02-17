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
char test = 'z';
while (test >= 'a')
{
	putchar(test);
	test--;
}
putchar('\n');
return (0);
}
