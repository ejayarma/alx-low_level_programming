#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @src:  the source string
 * @dest:  the destination string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	for (;;)
	{
		*(dest + i) = *(src + i);
		i += 1;
		if (*(src + i) == '\0')
		{
			break;
		}
	}
	return dest;
}
