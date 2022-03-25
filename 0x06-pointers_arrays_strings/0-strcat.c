#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcat - a function  that concatenates two strings.
 * @dest: destination string
 * @src: second string to append to dest
 * Return: Returns char *
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
