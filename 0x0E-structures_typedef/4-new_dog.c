#include <stdio.h>
#include "main.h"

/**
 * new_dog - Create a new dog
 * @d: The dog structure
 * @owner: Owner of dog
 * @name: Name of dog
 * @age: Dog's age
 *
 * Description: Longer description
 * Return: Always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t my_dog;
	dog_t *ptr;
	ptr = &my_dog;

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
