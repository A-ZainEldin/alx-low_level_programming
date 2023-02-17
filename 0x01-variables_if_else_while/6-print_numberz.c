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
int test = 0;

while (test <= 10)
{
	putchar(test + '0');
	test++;
}
putchar('\n');
return (0);
}
