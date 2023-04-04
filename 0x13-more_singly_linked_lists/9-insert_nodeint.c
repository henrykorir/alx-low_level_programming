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
	if (idx == 0 && (head == NULL || *head == NULL))
	{
		head = &new_node;
		return (*head);
	}
	curr = *head;
	prev = *head;
	while (pos < idx && prev->next != NULL)
	{
		prev = curr;
		curr = curr->next;
		pos++;
	}
	if (pos == idx && prev != NULL)
	{
		if (curr != NULL)
		{
			new_node->next = prev->next;
			prev->next = new_node;
		}
		else
			prev->next = new_node;
		return (new_node);
	}
	free(new_node);

	return (NULL);
}
