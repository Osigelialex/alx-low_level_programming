#include "search_algos.h"

/**
 * linear_search - implements the linear search algorithm
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search
 * Return: -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; array != NULL && i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n",
					i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n",
					i, array[i]);
		}
	}
	return (-1);
}
