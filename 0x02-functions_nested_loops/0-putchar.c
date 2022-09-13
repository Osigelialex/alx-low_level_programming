#include "main.h"

/**
 * main - program that prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
void _putchar(char ch)
{
	return (write(1, &c, 1));
}

int main(void)
{
	_putchar("_putchar\n");
	return (0);
}
