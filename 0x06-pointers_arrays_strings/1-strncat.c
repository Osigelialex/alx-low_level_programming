#include "main.h"

/**
 * _strncat - concatenates n characters
 * @dest: destination
 * @src: sourcee
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int len;

	len = 0;
	for (i = 0; dest[i] != '\0'; ++i)
	{
		len++;
	}
	for (j = 0; j < n; ++j)
	{
		dest[len + j] = src[j];
	}
	dest[len + j] = '\0';
	return (dest);
}
