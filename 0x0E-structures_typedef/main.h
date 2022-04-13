#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
