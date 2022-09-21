#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;
	int len1, len2;

	len1 = 0;
	len2 = 0;
	for (i = 0; dest[i] != '\0'; ++i)
	{
		len1++;
	}
	for (j = 0; src[j] != '\0'; ++j)
	{
		len2++;
	}
	for (k = 0; k < len2; ++k)
	{
		dest[len1 + k] = src[k];
	}
	dest[len1 + k] = '\0';
	return dest;
}
