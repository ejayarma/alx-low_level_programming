#include <stdio.h>
#include "main.h"

/**
 * init_dog - Short description
 * @d: The dog structure
 * @owner: Owner of dog
 * @name: Name of dog
 * @age: Dog's age
 *
 * Description: Longer description
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
