#include <stdio.h>

/**
 * main - Main entry for the program
 * Return: Returns 0
 */
int main(void)
{
	short i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
