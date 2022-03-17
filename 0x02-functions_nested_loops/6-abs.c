#include "main.h"

/**
 * _abs - computes absolute value of number.
 * @n: is the number to be converted to its absolute value.
 *
 * Return: the number converted to absolute value.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
