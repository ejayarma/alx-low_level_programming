#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node
 * at the end of a listint_t list.
 * @head: head node of list
 * @n: the value of int to add
 * Return: number of nodes
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *curr_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	curr_node = *head;
	while (curr_node->next)
	{
		curr_node = curr_node->next;
	}

	curr_node->next = new_node;
	return (new_node);
}
