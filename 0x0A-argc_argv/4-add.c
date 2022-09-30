#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	if (argc <= 1)
	{
		printf(0);
		putchar('\n');
	}
	else if (isdigit(argv[1]) == 0 || isdigit(argv[2] == 0))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) + atoi(argv[2]);
		return (0);
	}
}
