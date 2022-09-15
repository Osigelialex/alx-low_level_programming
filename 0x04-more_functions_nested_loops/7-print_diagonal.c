#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n : length of line
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	i = 0;
	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
	}
	if (i == 0)
		_putchar('\n');
}
