#include <stdio.h>
#include <string.h>

/**
 * main - Entry point of program
 * Return: Returns 0
 */
int main(void)
{
	int schar, sint, slong, sllong, sfloat;

	schar = sizeof(char);
	sint = sizeof(int);
	slong = sizeof(long);
	sllong = sizeof(long long);
	sfloat = sizeof(float);

	printf("Size of a char: %d byte(s)\n", schar);
	printf("Size of an int: %d byte(s)\n", sint);
	printf("Size of a long int: %d byte(s)\n", slong);
	printf("Size of a long long int: %d byte(s)\n", sllong);
	printf("Size of a float: %d byte(s)\n", sfloat);
	return (0);
}
