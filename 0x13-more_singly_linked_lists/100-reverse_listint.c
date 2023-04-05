#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverse a listint_t linked list
 * @head: address to the first node
 * Return: a pointer to the first node of the linked list
 */
listint_t *reverse_listint(listint_t **head)
{       
        listint_t *temp = NULL, *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	temp = (*head)->next;
	(*head)->next = NULL;
	for (; temp != NULL; )
	{
		next = temp->next;
		temp->next = *head;
		*head = temp;
		temp = next;
	}

	return (*head);
}

