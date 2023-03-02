#include "main.h"
/**
 * leet - does replace some characters
 * @char : is the string preformed on
 * Return : the starting index
 */
char *leet(char *test)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	i = 0;
	while (test[i])
	{
		j = 0;
		while (letters[j])
		{
			if (test[i] == letters[j])
			{
				test[i] = numbers[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (test);
}
