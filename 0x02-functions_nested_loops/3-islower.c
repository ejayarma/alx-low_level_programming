#include "main.h"

/**
 * _islower - checks if a lower case char.
 * @c: c is an int and will be checked if lowercase letter.
 * Description: it returns a 1 if is lower
 * and a 0 if not.
 * Return: 0 if lowercase, 1 anything else.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

