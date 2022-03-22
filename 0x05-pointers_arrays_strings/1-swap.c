#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * swap_int - a function that swaps 
 * the value of two integers
 * @n: first number
 * @b: second to the number
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*b = *a;
*a = temp;
}

