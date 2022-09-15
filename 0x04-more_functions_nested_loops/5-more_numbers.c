#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 * Return: 0
 */
void more_numbers(void)
{
	int i, n;

	for (i = 1; i <= 10; ++i)
	{
		for (n = 0; n <= 14; ++n)
		{
			_putchar('0' + n);
		}
		_putchar('\n');
	}
}
