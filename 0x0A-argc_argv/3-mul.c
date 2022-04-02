#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the product of two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x, y, product;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	product = x * y;
	printf("%d\n", product);
	return (0);
}
