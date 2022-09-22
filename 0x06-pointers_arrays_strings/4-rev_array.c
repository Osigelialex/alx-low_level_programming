#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: size
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		a[i + (n - 1)] = a[i];
	}
}
