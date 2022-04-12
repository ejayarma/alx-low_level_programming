#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  prints the name of the
 * file it was compiled from,
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
