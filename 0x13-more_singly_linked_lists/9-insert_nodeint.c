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
	listint_t *new_node, *curr, *prev;
	new_node = malloc(sizeof(listint_t *));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	curr = *head;
	prev = *head;
	while (pos < idx && curr != NULL)
	{
		prev = curr;
		curr = curr->next;
		pos++;
	}
	if (pos == idx)
	{
		if (curr != NULL)
		{
			new_node->next = curr;
			prev->next = new_node;
		}
		else
			prev->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
