#include "main.h"

/**
 * print_most_numbers - prints 0-9 skippind 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
			continue
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
