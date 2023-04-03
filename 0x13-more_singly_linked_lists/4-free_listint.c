#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - empty the list and deallocate memory
 * @head: starting node in the list
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
		curr = NULL;
	}
}
