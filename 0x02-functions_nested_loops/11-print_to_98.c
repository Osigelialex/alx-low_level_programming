#include "main.h"

/**
 * print_to_98 - prints number to 98
 * @n : starting number
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; --i)
		{
			_putchar(i + '0');
			if (i == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; ++i)
		{
			_putchar(i + '0');
			if (i == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
