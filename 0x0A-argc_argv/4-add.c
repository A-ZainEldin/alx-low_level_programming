#include<stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * is_numeric_string - checks if a string is numeric
 * str : the string checked
 * Return : always int
 */
int is_numeric_string(const char* str)
{
	int i = 0;
	while (str[i])
	{
		if (!isdigit(str[i]))
		{
			return 0;
		}
	i++;
	}
	return 1;
}
/**
 *main- a function that prints its arguments
 *@argc: the number of passed arguments
 *@argv: the string containg all arguments
 *Return: 0 is success
 */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			if(is_numeric_string(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
