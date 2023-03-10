#include<stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main- a function that prints its arguments
 *@argc: the number of passed arguments
 *@argv: the string containg all arguments
 *Return: 0 is success
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
		printf("ERROR");
	return (0);
}
