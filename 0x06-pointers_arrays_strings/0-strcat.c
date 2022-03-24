#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - a function  that returns the length of a string.
 * @dest: destination string
 * @src: second string to append to dest
 * Return: Returns char *
 */
char *_strcat(char *dest, char *src)
{
	int i;
	char *ptr;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	ptr = dest + i;
	while (*src != '\0')
	{
		*ptr = *src;
		ptr += 1;
		src += 1;
	}
	*ptr = '\0';
	return (dest);
}
