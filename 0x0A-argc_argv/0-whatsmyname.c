#include<stdio.h>
#include "main.h"
/**
 * main - a function that prints its name
 * @argc : the number of passed arguments
 * @argv : the string containg all arguments
 * Return : 0 is success
 */
int main (int argc __attribute__((unused)) , char *arg[])
{
	printf("%s\n",arg[0]);
	return (0);
}
