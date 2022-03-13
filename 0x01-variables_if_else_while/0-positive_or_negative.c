#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Main entry for the program
 * Return: Returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero", n);
	else if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is positive", n);
	return (0);

