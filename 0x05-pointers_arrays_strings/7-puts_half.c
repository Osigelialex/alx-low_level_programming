#include "main.h"

/**
 * puts_half - puts half
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int count, i, j, k;

	count = 0;
	for (i = 0; str[i] != '\0'; ++i)
	{
		count++;
	}
	if (count % 2 == 0)
	{
		for (j = count / 2; j < count; ++j)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
	else
	{
		for (k = ((count - 1) / 2)+2; k < count; ++k)
		{
			_putchar(str[k]);
		}
		_putchar('\n');
	}
}
