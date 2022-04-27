#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * A function that prints all the 
 * elements of a listint_t list
 * @h: head node of list
*/
size_t print_listint(const listint_t *h){
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes += 1;
		h = h->next;
	}
	return nodes;
}
