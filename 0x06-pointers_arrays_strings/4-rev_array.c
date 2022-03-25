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
	int i, j, arrlen;
	int arr[1024];

	for (i = 0; i < n; i++)
	{
		arr[i] = a[i];
	}
	i -= 1;
	for (j = 0; j < n;)
	{
		a[i] = arr[j];
		j++;
		i--;
	}
}
