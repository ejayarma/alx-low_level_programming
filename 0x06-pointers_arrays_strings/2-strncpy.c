#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - a function  that copies a string.
 * @dest: destination string
 * @src: second string to append to dest
 * @n: n bytes to be copied from from src
 * and apended to dest
 * Return: Returns char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	int dest_len = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
