#include "main.h"

/**
 * _isdigit - checks if an int is a char digit
 * @c: is the into to check if char digit
 * Return: 0 if not digit and 1 if digit
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
