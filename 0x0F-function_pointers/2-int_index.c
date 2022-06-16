#include "function_pointers.h"

/**
 * int_index - prints a name
 * @array: the array to be iterated
 * @size: size of array
 * @cmp: name of the person
 *
 * Return: int.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, matched, value;

	matched = -1;
	if (size <= 0)
	{
		return (matched);
	}

	for (i = 0; i < size; i++)
	{
		value = cmp(array[i]);
		if (value)
		{
			matched = i;
			break;
		}
	}
	return (matched);
}
