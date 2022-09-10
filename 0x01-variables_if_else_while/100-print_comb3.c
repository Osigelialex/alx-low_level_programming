#include <stdio.h>

/**
 * main - program that prints possible combinations of two digits.
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; ++i)
	{
		for (j = i + 1; j <= 9; ++j)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i == 8)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
