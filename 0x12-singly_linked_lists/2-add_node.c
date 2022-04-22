#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: - The head node of the list to be added to
 * @str: - The string of the new element
 *
 * Return: the number of nodes printed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;

	new_element = malloc(sizeof(list_t));
	if (!new_element)
		return (NULL);
	new_element->str = strdup(str);
	new_element->len = strlen(str);
	new_element->next = (*head);
	(*head) = new_element;
	return (*head);
}
