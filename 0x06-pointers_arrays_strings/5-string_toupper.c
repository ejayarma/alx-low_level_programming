#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - a function  that copies a string.
 * @a: pointer to the array
 * @n: is the number of elements of the array
 * and apended to dest
 * Return: void
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
