#include "main.h"

/**
 * print_chessboard - prints chess board
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j)
		{
			if (a[i][j] == ' ')
			{
				_putchar('\n');
			}
			else if (a[i][j] == ',')
			{
				_putchar(' ');
			}
			else
			{
				_putchar(a[i][j]);
			}
		}
	}
}
