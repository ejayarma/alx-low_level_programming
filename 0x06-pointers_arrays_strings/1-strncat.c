#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - a function  that concatenates two strings.
 * @dest: destination string
 * @src: second string to append to dest
 * @n: n bytes to be copied from from src
 * and apended to dest
 * Return: Returns char *
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return dest;
}
