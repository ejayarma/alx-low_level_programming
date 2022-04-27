#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * if the linked list is empty return 0
 * @head: head node of list
 * Return: the head node’s data (n) or 0 for an empty list
*/
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int node_value = 0;

	if (!(*head))
	{
		return (node_value);
	}
	temp_node = *head;
	node_value = temp_node->n;
	(*head) = temp_node->next;
	return (node_value);
}
