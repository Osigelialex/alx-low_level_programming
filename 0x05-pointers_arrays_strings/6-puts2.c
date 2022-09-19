#include "main.h"

/**
 * puts2 - prints other characters
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int x, i;
	int count;

	count = 0;
	for (x = 0; str[x] != '\0'; ++x)
	{
		count++;
	}
	for (i = 0; i < count; i += 2)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
