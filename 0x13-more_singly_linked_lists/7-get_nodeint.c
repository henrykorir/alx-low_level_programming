#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - retrieves a node an index
 * @head: pointer to the starting node
 * @index: index position of the node
 * Return: node at an index or zero if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int pos = 0;
	listint_t *curr;

	if (head == NULL)
		return (NULL);
	curr = head;
	while (curr != NULL)
	{
		if (pos == index)
			return (curr);
		curr = curr->next;
		pos++;
	}
	return (curr);
}
