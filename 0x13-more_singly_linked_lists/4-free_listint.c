#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - A function that
 * frees a listint_t list.
 * @head: head node of list
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
