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
	if (n <= 0)
		return;
	for (index = 0; index < n; ++index)
	{
		if (separator == NULL)
			printf("%d", va_arg(nums, int));
		else
			printf("%d%s", va_arg(nums, int), separator);
	}
	printf("\n");
	va_end(nums);
}
