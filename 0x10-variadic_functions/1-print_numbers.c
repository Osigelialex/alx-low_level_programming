#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers to be passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list nums;

	va_start(nums, n);
	for (index = 0; index < n; ++index)
	{
		if (separator != NULL && index < n)
			printf("%i%s", va_arg(nums, n), separator);
		else if (separator != NULL && index == n)
			printf("%i%s\n", va_arg(nums, n), separator);
		else
			printf("%i", va_arg(nums, n));
	}
	va_end(nums);
}
