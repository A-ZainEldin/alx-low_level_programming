#include<stdio.h>
/**
 *main - fizz buzz test
 *Return: As it is a main funtion return 0 means success
 */
int main(void)
{
	short int i;

	for (i = 1 ; i < 101 ; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
