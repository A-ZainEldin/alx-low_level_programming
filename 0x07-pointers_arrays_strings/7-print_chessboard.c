#include "main.h"
/**
 *print_chessboard-Prints a chessboard of 8x8 characters.
 *@a:A pointer to an array of characters representing the chessboard.
 *This function takes a pointer to an 8x8 character array representing a
 *chessboard, and prints its contents to the standard output, row by row.
 *Each row is terminated by a newline character ('\n').
 *Return:void (no return value).
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar (a[i][j]);
			if (j == 7)
			{
				_putchar('\n');
			}
		}
	}
}
