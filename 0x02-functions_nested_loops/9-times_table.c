#include "main.h"

/**
 * times_table - prints 9 times table starting with 0
 * Return: 0
 */
void times_table(void)
{
	int i, j, value;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			value = j * i;
			_putchar(value + '0');
			_putchar(value + ',');
			if (j == 9 && i == 9)
				break;
			_putchar(' ');
		}
		_putchar('\n');
	}
}			
