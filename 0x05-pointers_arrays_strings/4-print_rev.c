#include "main.h"

/**
 * print_rev - reverses a string
 * @s - string
 * Return: void
 */
void print_rev(char *s)
{
	int count, i, j;

	count = 0;
	for (i = 0; s[i] != '\0'; ++i)
	{
		len++;
	}
	for (j = len-1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
