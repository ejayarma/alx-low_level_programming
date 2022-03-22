#include <stdio.h>
#include <stdlib.h>
#include "_putchar.c"
#include "main.h"

/**
 * _puts - a function  that returns the length of a string.
 * @str: pointer to string
 */
void _puts(char *str)
{
	int i;
	char c;

	i = 0;
	c = *(str + i);
	while (c != '\0')
	{
		_putchar(c);
		i += 1;
		c = *(str + i);
	}
	_putchar('\n');
}
