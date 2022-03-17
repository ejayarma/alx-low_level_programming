#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lower case
 * 10 times
 * Check the code to see what it does
 * Return: Returns 0 always
 */
void print_alphabet_x10(void)
{
	short i, j;

	for(j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
