#include "main.h"

/**
 * print_array - prints an array
 * @a: array
 * @n: size of array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n: ++i)
	{
		if (i == n - 1)
		{
			printf("%d\n", i);
		}
		else
		{
			printf("%d, ", i);
		}
	}
}
