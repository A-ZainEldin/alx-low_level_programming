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
char test = 'a';
char test2 = 'A';

while (test <= 'z')
{
	putchar(test);
	test++;
}

while (test <= 'Z')
{
	putchar(test2);
	test2++;
}

putchar('\n');
return (0);
}
