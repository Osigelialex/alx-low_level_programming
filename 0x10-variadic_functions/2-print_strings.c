#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int index;
	va_list strings;
	char *str;

	va_start(strings, n);
	for (index = 0; index < n; ++index)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
