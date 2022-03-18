#include "main.h"
/**
 * print_number - print out a number using printchar.
 * @n: the number you want to print using putchar
 * Return: 0.
 */
void print_number(int n)
{
int  temp, temp2, cnt, div, result, i;

cnt = 0;
div = 1;
if (n < 0)
{
_putchar('-');
}
if (n == 0)
{
_putchar('0');
}
else
{
temp = n;
while (temp)
{
temp /= 10;
++cnt;
}
temp2 = cnt;
while (temp2 > 1)
{
div *= 10;
--temp2;
}
for (i = 0; i < cnt; ++i)
{
result = n / div;
if (result < 0)
result *= -1;
_putchar(result + '0');
n %= div;
div /= 10;
}
}
}
