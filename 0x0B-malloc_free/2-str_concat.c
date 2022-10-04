#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	;
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, n1, n2;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	n1 = _strlen(s1) + 1;
	n2 = _strlen(s2) + 1;
	s = malloc(n1 + n2);
	if (s == 0)
		return (0);

	for (i = 0; i < (n1 + n2) - 2; ++i)
	{
		if (i < n1 - 1)
			s[i] = s1[i];
		else
			s[i] = s2[i - n1];
	}
	s[i] = '\0';
	return (s);
}
