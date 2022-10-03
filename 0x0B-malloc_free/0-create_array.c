#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character
 * Return: NULL or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	a = malloc(size);
	if (size == 0 || a == NULL)
		return ('\0');
	a[0] = c;
	return (a);
}
