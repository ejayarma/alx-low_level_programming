#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - A function that prints the
 * number of nodes in a listint_t list
 * @h: head node of list
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
