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
	printf("Last digit of %d is ", n);
	if(n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 >= 6)
		printf("and is greater than 5\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
