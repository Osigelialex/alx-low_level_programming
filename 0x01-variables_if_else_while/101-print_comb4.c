#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 18; ++i)
	{
		for (j = i + 1; j <= 8; ++j)
		{
			for (k = j + 1; k <= 9; ++k)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
