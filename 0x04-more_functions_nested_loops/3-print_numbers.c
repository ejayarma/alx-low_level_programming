#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9 with new line.
 * Return: void.
 */
void print_numbers(void)
{
int n;

n = '0';
while (n <= '9')
{
_putchar(n);
++n;
}
_putchar('\n');
}
