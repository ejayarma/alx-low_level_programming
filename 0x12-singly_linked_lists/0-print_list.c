#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print all the elements of a linked list
 * @h: - The head node of the list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		nodeCount += 1;
		h = h->next;
	}
	return (nodeCount);
}
