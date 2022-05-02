#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node at a given position.
 * @idx: he index of the list where the new node should be added
 * @head: first node
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	
	new_node->n = n;

	if (!(*head))
		return (NULL);
	while (i < idx + 1)
	{
		if (!(*head))
			return (NULL);
		node = (*head);
		(*head) = (*head)->next;
		i += 1;
	}
	return (node);
}
