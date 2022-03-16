#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print the alphabet in lower case
 * Check the code to see what it does
 * Return: Returns 0 always
 */
void print_alphabet(void)
{
	short i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
