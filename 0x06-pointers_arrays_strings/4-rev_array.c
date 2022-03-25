#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - a function  that copies a string.
 * @a: pointer to the array
 * @n: is the number of elements of the array
 * and apended to dest
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
