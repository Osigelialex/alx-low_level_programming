#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int mul;

	if (argc != 2)
		printf("Error\n");
		return (1);
	mul = argv[1] * argv[2];
	printf("%d\n", mul);
	return (0);
}
