#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @c: string
 * Return: pointer
 */
char *string_toupper(char *c)
{
	int i; 

	for (i = 0; c[i] != '\0'; ++i)
	{
		if (c < 'a')
		{
			c[i] = c + 32;
		}
	}
}
