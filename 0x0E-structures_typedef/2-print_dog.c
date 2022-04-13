#include <stdio.h>
#include "main.h"

/**
 * printt_dog - Short description
 * @d: The dog structure to be printed
 *
 * Description: Longer description
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");

	if (d->age)
		printf("Age: %f\n", d->age);
}
