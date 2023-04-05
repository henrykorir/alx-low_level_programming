#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node an index if possible
 * @head: pointer to the first node in the list
 * @idx: the index where a new node is to be inserted
 * @n: the data the new node should have
 * Return: new node pointer or NULL if unsuccessful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pos = 0;
	listint_t *new_node, *curr = NULL, *prev = NULL;

	new_node = malloc(sizeof(listint_t *));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (head == NULL && idx == 0)
		return ((*head = new_node));
	curr = *head;
	prev = *head;
	if ((curr + idx) == NULL && ((curr + (idx - 1)) == NULL))
		return (NULL);
	while (curr != NULL)
	{
		if (pos == idx)
		{
			new_node->next = prev->next;
			prev->next = new_node;
			return (new_node);
		}
		prev = curr;
		curr = curr->next;
		pos++;
	}
	if (pos == idx)
	{
		prev->next = new_node;
		return (new_node);
	}
	free(new_node);
	new_node = NULL;

	return (NULL);
}
