#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		return (_puts_recursion(*s++));
	}
}
