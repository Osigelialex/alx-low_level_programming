#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase
 * Return: Always 0 (Success)
 * print_alphabet - prints 10 times the alphabet, in lowercase
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; ++i)
	{
		_putchar(i);
	}
	_putchar('\n');
}
