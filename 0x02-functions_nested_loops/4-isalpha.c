#include "main.h"

/**
 * _isalpha - checks to see if an int is a letter.
 * @c: is the int to be checked if a lower or upper case letter.
 *
 * Description: takes an int as input and checks if lower or upper.
 * Return: returns 1 if letter and 0 if not.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
