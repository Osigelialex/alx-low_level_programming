#include "main.h"

/**
 * print_square - prints a square
 * @size : size of square
 * Return:void
 */
void print_square(int size)
{
	int i, j;

	i = 0;
	while (i < size && size > 0)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
