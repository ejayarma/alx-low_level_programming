#include <stdio.h>
#include <string.h>

/**
 * main - Entry point of program
 * Return: Returns 0
 */
int main(void)
{
int i, j, k, l, a, b;

for (i = 48; i < 58; i++)
{
	for (j = 48; j < 58; j++)
	{
		for (k = 48; k < 58; k++)
		{
			for (l = 48; l < 58; l++)
			{
				a = (i - 48) * 10 + (j - 48);
				b = (k - 48) * 10 + (l - 48);
				if (1 && (a < b))
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!(i == '9' && j == '8' && k == '9' && l == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}
putchar('\n');
return (0);
}

