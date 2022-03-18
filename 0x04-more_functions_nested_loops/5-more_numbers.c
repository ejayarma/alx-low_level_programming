#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times on different lines
 * Return: 0 Always
 */

void more_numbers(void)
{
	char numbers[] = "01234567891011121314\n";
	int i;

	for(int j = 0; j < 10; j++)
	{
		i = 0;
		while(numbers[i] != '\0')
		{
			_putchar(numbers[i]);
			i++;
		}
	}
}
