#include "main.h"

/**
 * _print_rev_recursion - writes a string s to stdout reversed
 * @s: The string to print
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		*s += 1;
	}
	*s -= 1;
	_print_rev_recursion(s);
}
