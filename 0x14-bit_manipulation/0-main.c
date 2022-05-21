#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, slen, i;

	slen = strlen(b);
	sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; i < slen; i++)
	{
		if (b[i] == 48)
		{
			slen -= 1;
			continue;
		}
		else if (b[i] != 49)
		{
			sum += pow(2, slen);
			slen -= 1;
		}
		else
			return (0);
	}
	return (sum);
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
