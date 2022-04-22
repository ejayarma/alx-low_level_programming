#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: - The head node of the list to be added to
 * @str: - The string of the new element
 *
 * Return: the number of nodes printed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element;
	list_t *current_element;

	new_element = malloc(sizeof(list_t));
	new_element->str = strdup(str);
	new_element->len = strlen(str);
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}

	current_element = *head;
	while (current_element->next)
	{
		current_element = current_element->next;
	}

	current_element->next = new_element;
	return (new_element);
}
