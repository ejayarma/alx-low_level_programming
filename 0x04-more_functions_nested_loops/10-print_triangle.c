#include "main.h"
/**
 * print_triangle - pyramid of # print to the screen given the input size
 * @size: size of the pyramid.
 * Return: void.
 */
void print_triangle(int size)
{
int i, j;

if (size <= 0)
_putchar('\n');

for (i = 0; i < size; ++i)
{
for (j = 0; j < size; ++j)
{
if (j >= (size - (i + 1)))
_putchar('#');
else
_putchar(' ');
}
_putchar('\n');
}
}
