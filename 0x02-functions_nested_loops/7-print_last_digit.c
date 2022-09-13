#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n : parameter used to check
 * Return: varies
 */
int print_last_digit(int n)
{
	int last;
	
	last = n % 10;
	_putchar(last + '0');
	return (last);
}
