#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 * Return: 0
 */
void more_numbers(void)
{
	char n;
	char c;

	n = 0;
	c = 0;
	while (n <= 9)
	{
		while (c <= 14)
		{
			_putchar('0' + c);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
