#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: The string to be treated
 *
 * Return: void
 */
void puts_half(char *str)
{
    int i, mid;
    int j = 0;

    while (str[j] != '\0')
    {
        j++;
    }
    mid = j / 2;
    if (mid % 2 == 1)
    {
        for (i = mid; i < j; i += 1)
        {
            _putchar(str[i]);
        }
    }
    else
    {
        for (i = 0; i < mid; i += 1)
        {
            _putchar(str[i]);
        }
    }

    _putchar('\n');
}
