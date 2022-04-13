#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_dog - Create a new dog
 * @d: The dog structure
 * @owner: Owner of dog
 * @name: Name of dog
 * @age: Dog's age
 *
 * Description: Longer description
 * Return: Always 0
 */
void free_dog(dog_t *d)
{
	free(d);
}
