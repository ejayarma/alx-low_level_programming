
#include "main.h"

/**
 * _puts_recursion - writes a string s to stdout
 * @s: The string to print
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s++);
	_puts_recursion(s);
}
