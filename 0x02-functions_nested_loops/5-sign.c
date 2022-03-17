#include "main.h"

/**
 * print_sign - checks if num is positive, neg or zero and prints the sign.
 * @n: The number to be checked if 0 pos or neg.
 *
 * Return: 1 if number is positive, 0 if 0 and -1 if negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
