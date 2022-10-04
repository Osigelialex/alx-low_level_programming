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
	int i = 0;

	s = malloc(sizeof(str));
	if (str == NULL || s == NULL)
		return (NULL);
	for (; str[i] != '\0'; ++i)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
