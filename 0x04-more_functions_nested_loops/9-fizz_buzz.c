#include <stdio.h>
#include <stdlib.h>
/**
 * main - fizzbuzz print ot he console 1-100.
 * Return: void.
 */
int main(void)
{
int i;

for (i = 1; i < 101; ++i)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);

if (i < 100)
printf(" ");

}
printf("\n");

return (0);
}
