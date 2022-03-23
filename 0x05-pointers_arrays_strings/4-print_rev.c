#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line
 * @s: pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	i -= 1;
	while (i > -1)
	{
		_putchar(s[i]);
		i -= 1;
	}

	_putchar('\n');
}
