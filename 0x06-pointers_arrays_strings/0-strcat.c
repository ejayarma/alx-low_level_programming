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
	char *ptr;

	ptr = dest + strlen(dest);
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
