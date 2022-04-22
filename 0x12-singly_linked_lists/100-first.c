#include <stdio.h>
#include "lists.h"

void functionBeforeMain(void) __attribute__((constructor));

void functionBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
