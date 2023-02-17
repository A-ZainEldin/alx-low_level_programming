#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
/* more headers goes there */
/**
 *main - this is main discription
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int test;
test = n % 10;
if (test > 5)
{
	printf("last digit of %d is %d and is greater than 5", n, test);
}
else if (test == 0)
{
	printf("last digit of %d is %d and is 0", n, test);
}
else
{
	printf("last digit of %d is %d and is less than 6 and not 0", n, test);
}
return (0);
}
