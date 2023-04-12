#include "search_algos.h"

/**
 * binary_search - implements the binary search algorithm
 * @size: size of the array
 * @array: pointer to first element in array
 * @value: value to be searched
 * Return: position or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right;
	int mid;
	size_t i;

	left = 0;
	right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right && array != NULL)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
			{
				printf("%ld\n", i);
			}
			else
			{
				printf("%ld, ", i);
			}
		}
		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
