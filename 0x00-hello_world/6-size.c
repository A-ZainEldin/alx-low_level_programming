#include <stdio.h>
/**
 * main - this is a function that print a siza 
 * Return: 0(Success)
 * thats it
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int o;
	float f;
	printf("Size of a char: %lu byte(s)\nSize of an int: %lu byte(s)\nSize of a long int: %lu byte(s)\nSize of a long long int: %lu byte(s)\nSize of a float: %lu byte(s)", (unsigned long)sizeof(x), (unsigned long)sizeof(y), (unsigned long)sizeof(z), (unsigned long)sizeof(o), (unsigned long)sizeof(f));

	return (0);
}

