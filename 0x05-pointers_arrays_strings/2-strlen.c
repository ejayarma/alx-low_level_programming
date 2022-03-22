#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - a function  that returns the length of a string.
 * @s: pointer to string
 * Return: Returns an integer
 */
int _strlen(char *s)
{
	char c;
	int i = 0;

	c = *(s + i);
	while (c != '\0')
	{
		i += 1;
		c = *(s + i);
	}
	return (i);
}
