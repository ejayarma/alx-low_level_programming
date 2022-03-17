#include "main.h"
/**
 * print_nums - prints out 3, 2, and 1 digit numbers with spaces
 * @num: this is the multiplied number
 * Return: void just pring to console.
 */
void print_nums(int num)
{
int x, y, z;

if (num > 99)
{
x = num / 100 + '0';
y = num / 10 % 10  + '0';
z = num % 10 + '0';
_putchar(' ');
_putchar(x);
_putchar(y);
_putchar(z);
}
else if (num > 9)
{
x = num / 10 + '0';
y = num % 10 + '0';
_putchar(' ');
_putchar(' ');
_putchar(x);
_putchar(y);
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(num + '0');
}
}
/**
 * print_times_table - print the times table depending on input
 * @n: input that will dicate size of times table.
 *
 * print_nums
 * Return: void, print out to console.
 */
void print_times_table(int n)
{
int i, j, num;

if (n >= 0 && n < 16)
{
for (i = 0; i <= n; ++i)
{
for (j = 0; j <= n; ++j)
{
num = i * j;
if (j == 0)
_putchar('0');
else
print_nums(num);

if (j < n)
_putchar(',');
else
_putchar('\n');
}
}
}
}
