#include "function_pointer.h"
#include <stdio.h>

/**
 * array_iterator - executes a function on elements of array
 * @array: array
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
