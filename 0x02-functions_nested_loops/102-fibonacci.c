#include <stdlib.h>
#include <stdio.h>
/**
 * main - print first 50 fibbonacci nums starting with 1, 2
 * Return: 0.
 */

int main(void)
{
int i;
unsigned long num1, num2, temp;

num1 = 0;
num2 = 1;

for (i = 0; i < 50; ++i)
{
temp = num1 + num2;
if (i < 49)
printf("%lu, ", temp);
else

printf("%lu", temp);

num1 = num2;
num2 = temp;
}
printf("\n");
return (0);
}
