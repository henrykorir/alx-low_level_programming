#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - remove a node at an index
 * and reclaim memory
 * @head: address of the starting node
 * @index: the index of the node to delete
 * Return: data at the node or 0 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	int n;
	listint_t *curr = NULL, *prev, *del;

	if (head == NULL || *head == NULL)
		return (0);
	if (index == 0)
	{
		n = (*head)->n;
		del = *head;
		*head = del->next;
		free(del);
		return (n);
	}
	curr = *head;
	prev = NULL;
	while (curr != NULL)
	{
		if (pos == index)
		{
			n = curr->n;
			del = curr;
			if (prev != NULL)
				prev->next = curr->next;
			free(del);
			del = NULL;
			return (n);
		}
		prev = curr;
		curr = curr->next;
		pos++;
	}
	return (0);
}
