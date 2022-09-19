#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	int count = 0;
	int temp;

	for (i = 0; s[i] != '\0'; ++i)
	{
		count++;
	}
	for (j = 0; j < count / 2; ++j)
	{
		temp = s[j];
		s[j] = s[count - j - 1];
		s[count - j - 1] = temp;
	}
}
