#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all multiples of 3 || 5 below 1024
 * Return: 0.
 */

int main(void)
{
int i, num;

num = 0;

for (i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
num += i;
}
printf("%d\n", num);

return (0);
}
