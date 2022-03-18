#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all real numbers to 98.
 * @n: is the given number and we go up to 98.
 *
 * Return: no return just print.
 */

void print_to_98(int n)
{
int i;

if (n > 98)
{
for (i = n; i > 98; --i)
printf("%d, ", i);
printf("98\n");
}
else
{
for (i = n; i < 98; ++i)
printf("%d, ", i);
printf("98\n");
}
}
