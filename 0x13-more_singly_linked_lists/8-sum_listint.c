#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - A function that computes the sum of
 * all the data (n) of a listint_t linked list.
 * @head: head node of list
 * Return: the sum or 0 for an empty list
*/
int sum_listint(listint_t *head)
{
	long int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
