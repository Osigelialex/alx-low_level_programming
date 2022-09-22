#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @c: string
 * Return: pointer
 */
char *string_toupper(char *c)
{
	for (; *c; c++)
	{
		if (('a' <= *c) && (*c <= 'z'))
		{
			*c = 'A' + (*c - 'a');
		}
	}
	return (c);
}
