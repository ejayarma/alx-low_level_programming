#include "main.h"
/**
 * print_diagonal - print a diagonal line with size dicated by input var.
 * @n: the length of the diagonal line, so number of lines down
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
_putchar('\n');
for (i = 0; i < n; ++i)
{
for (j = 0; j < i; ++j)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
