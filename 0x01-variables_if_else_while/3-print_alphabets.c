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
		putchar(i);
	}
	
	for (i = 65; i < 91; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
