#include <stdlib.h>
#include <stdio.h>
/**
 * main - print out sum of all even fibonacci num below 4 million
 * Return: 0.
 */
int main(void)
{
unsigned long num1, num2, temp, sum;

num1 = 0;
num2 = 1;
sum = 0;

while (num2 < 4000000)
{
temp = (long) num1 + num2;
if (temp % 2 == 0)
sum += temp;

num1 = num2;
num2 = temp;
}
printf("%lu\n", sum);
return (0);
}
