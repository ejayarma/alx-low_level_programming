#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns
 * the nth node of a listint_t linked list.
 * @head: head node of list
 * @index: to search
 * Return: the found listint_t list at
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head || index < 0)
		return (NULL);
	while (i < index + 1)
	{
		if (!head)
			return (NULL);
		head = head->next;
		i += 1;
	}
	return (head);
}
