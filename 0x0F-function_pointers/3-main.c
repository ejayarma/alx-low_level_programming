#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of programme
 *
 * @argc: argument count
 * @argv: arguments
 * Return: return value
 */
int main(int argc, char const *argv[])
{
	char *op;
	int x, y, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[3]);
		op = (char *)argv[2];

		f = get_op_func(op);
		if (f == NULL)
		{
			puts("Error");
			exit(98);
		}
		else if ((f == op_div || f == op_mod) && y == 0)
		{
			puts("Error");
			exit(98);
		}

		result = f(x, y);
		printf("%d\n", result);
	}

	return (0);
}
