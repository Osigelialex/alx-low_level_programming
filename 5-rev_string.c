#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k;
	int count = 0;

	for (i  = 0; s[i] != '\0'; ++i)
	{
		count++;
	}
	for (j = 0; j < count; ++j)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
	for (k = count - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
}
