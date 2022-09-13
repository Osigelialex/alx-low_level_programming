#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @n : parameter to find absolute
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
