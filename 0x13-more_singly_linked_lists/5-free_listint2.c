#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - erases a list and set head pointer to NULL
 * @head: pointer to the starting node
 */
void free_listint2(listint_t **head)
{
	listint_t *del;

	while (head != NULL && *head != NULL)
	{
		del = *head;
		*head = (*head)->next;
		free(del);
		del = NULL;
	}
	head = NULL;
}
