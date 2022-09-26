#include "main.h"

/**
 * _strpbrk - searches string for set of bytes
 * @s: string
 * @accept: second string
 * Return: char *
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s++ != '\0')
	{
		while (*accept++ != '\0')
		{
			if (*accept == *s)
			{
				return (s);
			}
		}
	}
	return ('\0');
}
