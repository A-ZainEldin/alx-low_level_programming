#include"main.h"
/**
 * _islower - this is a program that checks if a number is samll
 * @c : is the number tested
 * Return: Always 0 or 1 (Success)
 */
int _islower(int c)
{
	if (c > 123 || c < 97)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
