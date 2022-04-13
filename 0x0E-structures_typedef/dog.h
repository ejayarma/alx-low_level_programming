#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @owner: Owner of dog
 * @name: Name of dog
 * @age: Dog's age
 *
 * Description: A simple definition of dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

#endif /* #ifndef DOG */
