#include "main.h"

/**
 * _isdigit - checks if an int is a char digit
 * @c: is the into to check if char digit
 * Return: 0 if not digit and 1 if digit
 */

void more_nubmers(void)
{
	char numbers[] = "01234567891011121314\n";
	int i = 0;

	for(int j = 0; j < 10; j++)
	{
		while(numbers[i] != '\0')
		{
			_putchar(numbers[i]);
			i++;
		}
	}
}
