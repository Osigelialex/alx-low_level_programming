#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return: void
 */
void more_numbers(void)
{
	char i, n;

	for (i = 1; i <= 10; ++i)
	{
		for (n = 0; n <= 14; ++n)
		{
			_putchar('0' + n);
		}
		_putchar('\n');
	}
}
