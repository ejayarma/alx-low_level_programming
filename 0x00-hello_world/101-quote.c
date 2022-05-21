#include <stdio.h>

/**
 * main - main entry of program
 * Return: always 0
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\0";
	int i = 0;

	while (quote[i])
	{
		putchar(quote[i]);
		i += 1;
	}
	putchar('\n');

	return (0);
}
