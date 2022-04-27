#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a list_t list
 * and sets the head to NULL
 * @head: - The head node of the list to be freed
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((*head))
	{
		temp = (*head)->next;
		free((*head));
		(*head) = temp;
	}
	*head = NULL;
}
