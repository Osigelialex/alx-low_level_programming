#include <stdio.h>

/**
 * main - prints combination of two digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			for (k = 0; k <= 9; ++k)
			{
				for (l = 0; l <= 9; ++l)
				{
					if (l == 0 && k == 0)
						continue;
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					putchar(' ');
					putchar((k % 10) + '0');
					putchar((l % 10) + '0');
					if (i == 9 && l == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
