#include "main.h"
#include <stdlib.h>

/**
 * str - string
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
	int i, j;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	n1 = _strlen(s1) + 1;
	n2 = _strlen(s2) + 1;
	s = malloc(n1 + n2);
	for (i = 0; i < (n1 + n2) - 2; ++i)
	{
		if (i < n1 - 1)
			s[i] = s1[i];
		else {
			s[i] = s2[i - n1];
	}
	return (s);
}
