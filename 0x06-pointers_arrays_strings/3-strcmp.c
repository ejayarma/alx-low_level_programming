#include "main.h"

/**
 * _strcmp - a function  that copies a string.
 * @s1: string 1
 * @s2: string 2
 * and apended to dest
 * Return: Returns char *
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int R;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	R = s1[i] - s2[i];
	return (R);
}
