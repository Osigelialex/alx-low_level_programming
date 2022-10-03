#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a new string
 * @str: string
 * Return: char *
 */
char *_strdup(char *str)
{
	char *s;

	s = malloc(sizeof(str));
	if (str == NULL || s == NULL)
		return ('\0');
	s = str;
	free(str);
	return (s);
}
