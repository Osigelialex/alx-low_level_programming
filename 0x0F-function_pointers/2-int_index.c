#include "function_pointer.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: function pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
		return (-1);
	while (size-- > 0)
	{
		if (cmp(*array))
			return (index);
			index++;
			array++;
	}
	return (-1);
}
