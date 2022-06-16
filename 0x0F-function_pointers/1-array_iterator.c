#include "function_pointers.h"

/**
 * array_iterator - prints a name
 * @array: the array to be iterated
 * @size: size of array
 * @action: action to perform during iteration
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
