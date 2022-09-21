#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	int len1, len2;
	char *ptr;

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
	ptr = dest + len1;
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return dest;
}
