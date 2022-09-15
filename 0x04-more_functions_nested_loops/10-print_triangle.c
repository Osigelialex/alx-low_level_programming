#include "main.h"

/**
 * print_triangle - prints triangle
 * @size - size of triangle
 * Return:void
 */
void print_triangle(int size)
{
	int i, j;
	
	i = 1;
	while (i <= size && size > 0)
	{
		j = 0;
		while (j < size - i)
		{
			_putchar(' ');
			j++;
		}
		j = 0;
		while (j < 1)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
