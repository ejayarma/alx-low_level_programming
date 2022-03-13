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
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
