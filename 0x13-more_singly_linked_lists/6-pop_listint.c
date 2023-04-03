#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - gets the data of the first node
 * and removes the node
 * @head: pointer to the first node
 * Return: node data, 0 otherwise
 */
int pop_listint(listint_t **head)
{
	int  n;
	listint_t *start;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	start = (*head);
	*head = (*head)->next;
	free(start);
	start = NULL;

	return (n);
}
