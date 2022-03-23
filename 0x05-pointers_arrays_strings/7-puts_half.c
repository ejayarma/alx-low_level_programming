#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: The string to be treated
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, n, mid;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	mid = j / 2;
	n = (j - 1) / 2;
	if (mid % 2 == 1)
	{
		for (i = n + 1; i < j; i += 1)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = mid; i < j; i += 1)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
