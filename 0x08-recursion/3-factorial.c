#include "main.h"

/**
 * factorial - finds factorial of a numbre
 * @n: number
 * Return: factorial
 */
int factorial(int n)
{
	if (n <= 0)
		return (1);
	return (n * factorial(n - 1));
}
