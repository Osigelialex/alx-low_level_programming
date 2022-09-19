#include "main.h"

/**
 * print_rev - reverses a string
 * @s - string
 * Return: void
 */
void print_rev(char *s)
{
	int len, i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		len++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
