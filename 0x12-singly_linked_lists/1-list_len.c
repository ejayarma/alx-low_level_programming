#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the number of elements in a linked list
 * @h: - The head node of the list to be counted
 *
 * Return: the number of nodes printed
 */
size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		nodeCount += 1;
		h = h->next;
	}
	return (nodeCount);
}
