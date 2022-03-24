#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - a function  that copies a string.
 * @dest: string 1
 * @src: string 2
 * and apended to dest
 * Return: Returns char *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return 1;
		}
		s1 += 1;
		s2 += 1;
	}
	return (0);
}
