#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int len;
	char *ptr;

	len = 0;
	for (i = 0; dest[i] != '\0'; ++i)
	{
		len++;
	}
	ptr = dest + len;
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest++ = '\0';
	return (dest);
}
