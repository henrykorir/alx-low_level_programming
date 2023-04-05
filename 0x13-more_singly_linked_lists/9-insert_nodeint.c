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
	listint_t *new_node, *curr = *head;
	unsigned int pos;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = curr;
		*head = new_node;
		return (new_node);
	}

	for (pos = 0; pos < (idx - 1); pos++)
	{
		if (curr == NULL || curr->next == NULL)
			return (NULL);

		curr = curr->next;
	}

	new_node->next = curr->next;
	curr->next = new_node;

	return (new_node);
}
