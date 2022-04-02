#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int q, coin, change, i = 0, times = 0;

	int coins[] = {25, 10, 5, 2, 1};
	if (argc - 1 != 1)
	{
		puts("Error");
		return (1);
	}
	change = atoi(argv[1]);
	if (change == 0)
	{
		puts("0");
		return (1);
	}
	coin = coins[i];
	while (change > 0 && i < 5)
	{
		q = change / coin;
		times += q;
		change -= q * coin;
		coin = coins[++i];
	}
	printf("%d\n", times);
}
