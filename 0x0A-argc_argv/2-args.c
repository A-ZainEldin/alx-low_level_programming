#include<stdio.h>
#include "main.h"
/**
 *main- a function that prints its arguments
 *@argc: the number of passed arguments
 *@argv: the string containg all arguments
 *Return: 0 is success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
