#include "main.h"
/**
 * leet - does replace some characters
 * @char : is the string preformed on
 * Return : the starting index
 */
char *leet(char *test)
{
	int i;

	for(i = 0; test[i] != '\0'; i++)
	{
		if(test[i] == 'a' || test[i] == 'A')
		{
			test[i] = '4';
		}
		if(test[i] == 'e' || test[i] == 'E')
		{
			test[i] = '3';
		}
		if(test[i] == 'o' || test[i] == 'O')
		{
			test[i] = '0';
		}
		if(test[i] == 't' || test[i] == 'T')
		{
			test[i] = '7';
		}
		if(test[i] == 'l' || test[i] == 'L')
		{
			test[i] = '1';
		}
	}
	return (test);
}
