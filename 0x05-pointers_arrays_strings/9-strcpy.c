#include "main.h"

/**
 * _strcpy - copies a string to another
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = src;
	while (*ptr != '\0')
	{
		*dest++ = *ptr++;
	}
	*(++dest) = '\0';
	return (dest);
}
