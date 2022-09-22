#include "main.h"

/**
 * _strncat - concatenates n characters
 * @dest: destination
 * @src: source
 * @n: n characters
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int len;

	len = 0;
	j = 0;
	for (i = 0; dest[i] != '\0'; ++i)
	{
		len++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[len + j] = src[j];
		j++;
	}
	dest[len + j] = '\0';
	return (dest);
}
