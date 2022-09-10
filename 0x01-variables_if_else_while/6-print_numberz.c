#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n')
	return (0);
}
