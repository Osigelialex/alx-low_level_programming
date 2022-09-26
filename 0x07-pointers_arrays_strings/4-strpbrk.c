#include "main.h"

/**
 * _strpbrk - searches string for set of bytes
 * @s: string
 * @accept: second string
 * Return: char *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				char *p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
