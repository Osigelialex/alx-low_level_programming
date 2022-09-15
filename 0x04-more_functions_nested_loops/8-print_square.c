#include <stdio.h>

/**
 * print_square - prints a square
 * @n : size of square
 * Return: 0
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; ++i)
	{
		for (j = 1; j <= size; ++j)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
