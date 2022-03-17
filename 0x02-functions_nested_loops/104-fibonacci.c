#include <stdlib.h>
#include <stdio.h>
/**
 * main - print out 98 fib numbers starting with 1, 2
 *
 * Description: Not allowed to use type long long so
 * had to cut both numbers in 2 after certain point then had to account
 * for when the bottom part of number would overflow to the top part.
 * Return: Description of the returned value
 */
int main(void)
{
int i, flag;
unsigned long n1, n2, t, rem, fp_n2, sp_n2, fp_n1, sp_n1, t1, t2;

n1 = 0;
n2 = 1;
flag = 0;
for (i = 0; i < 98; ++i)
{
if (n2 < 1000000000000000000)
{
t =  n1 + n2;
printf("%lu, ", t);
n1 = n2;
n2 = t;
}
else
{
if (flag++ == 0)
{
fp_n2 = n2 / 10000000000;
sp_n2 = n2 % 10000000000;
fp_n1 = n1 / 10000000000;
sp_n1 = n1 % 10000000000;
}
t1 = fp_n1 + fp_n2;
t2 = sp_n1 + sp_n2;
rem = t2 / 10000000000;
t1 += rem;
t2 %= 10000000000;
if (i < 97)
printf("%lu%010lu, ", t1, t2);
fp_n1 = fp_n2;
sp_n1 = sp_n2;
fp_n2 = t1;
sp_n2 = t2;
}
}
printf("%lu%lu\n", t1, t2);
return (0);
}
