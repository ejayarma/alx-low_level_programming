#include "main.h"
/**
 * more_numbers - print 0 to 15 10 times on different lines.
 * Return: void.
 */
void more_numbers(void)
{
	int i, j, n;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0, n = 0; j < 15; ++j, ++n)
		{
			if (j > 9)
			{
				_putchar('1');
				n = j % 10;
			}
			_putchar(n + '0');
		}
		_putchar('\n');
	}

}
