#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - Print all the elements of a linked list
 * @h - The head node of the list to print
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t nodeCount;
	const list_t *currentNode = h;

	nodeCount = 0;
	while (currentNode != NULL)
	{
		if (currentNode->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", currentNode->len, currentNode->str);
		}
		nodeCount += 1;
		currentNode = currentNode->next;
	}
	return (nodeCount);
}
