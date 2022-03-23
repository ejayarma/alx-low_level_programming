#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * rev_string - a function that  reverses a string.
 * @s: pointer to string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char s2[1024];

	while (*(s + i))
	{
		*(s2 + i) = *(s + i);
		i += 1;
	}
	i -= 1;
	while (i >= 0)
	{
		*(s + i) = *(s2 + j);
		i -= 1;
		j += 1;
	}
}
