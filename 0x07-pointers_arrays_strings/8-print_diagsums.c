#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonal
 * @a: array
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int leftsum;
	int rightsum;

	leftsum = 0;
	rightsum = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				leftsum += a[i][j];
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			if (j == i + (size - 1))
			{
				rightsum += a[i][j];
			}
		}
	}
	printf("%d,", leftsum);
	printf("%d\n", rightsum);
}
