#include <stdlib.h>
#include "lists.h"
/**
 * free_list - deallocate linked list memory
 * @head: the head of the linked list
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		if (temp->str != NULL)
		{
			free(temp->str);
			temp->str = NULL;
		}
		free(temp);
	}
	head = NULL;
}
