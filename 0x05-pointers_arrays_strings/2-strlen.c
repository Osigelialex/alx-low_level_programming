#include "main.h"

/**
 * _strlen - returns size of string
 * @s: string
 * Return: size
 */
int _strlen(char *s)
{
	int len, i;

	i = 0;
	len = 0;
	while (s[i] != NULL)
	{
		len++;
		i++;
	}
	return (len);
}
