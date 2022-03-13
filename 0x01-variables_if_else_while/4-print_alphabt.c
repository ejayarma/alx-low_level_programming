#include <stdio.h>

/**
 * main - Main entry for the program
 * Return: Returns 0
 */
int main(void)
{
	short i;

	for (i = 97; i < 123; i++)
	{
		if ((i == 101) || (i == 113))
			continue;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
