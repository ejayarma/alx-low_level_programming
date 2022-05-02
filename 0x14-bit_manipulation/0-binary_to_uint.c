#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - a function that frees a list_t list
 * @b: - pointer to a string of 0 and 1 chars
 *
 * Return: int or 0 if error occured
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, slen, i;

	slen = strlen(b);
	sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; i < slen; i++)
	{
		if (b[i] == 48)
		{
			slen -= 1;
			continue;
		}
		else if (b[i] != 49)
		{
			sum += pow(2, slen);
			slen -= 1;
		}
		else
			return (0);
	}
	return (sum);
}
