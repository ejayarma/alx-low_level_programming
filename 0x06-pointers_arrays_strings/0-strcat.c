#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - a function  that returns the length of a string.
 * @dest: destination string
 * @src: second string to append to dest
 * Return: Returns char *
 */
char *_strcat(char *dest, char *src)
{
	char *str = dest;

	while (*str != '\0')
	{
		str++;
	}
	while (*src != '\0')
	{
		*str++ = *src++;
	}
	*str = '\0';
	return (dest);
}
