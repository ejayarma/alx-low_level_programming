#include <stdlib.h>
#include "main.h"

/**
 * main -  prints the name of the
 * file it was compiled from,
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char path[1024] = __FILE__;

	i = 0;
	while (path[i])
	{
		i++;
	}

	while (path[i] != '/')
	{
		if (i == 0)
		{
			break;
		}

		i--;
	}

	if (i != 0)
	{
		i++;
	}

	while (path[i])
	{
		_putchar(path[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
