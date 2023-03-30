#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - counts the length of linked list
 * @h: head of the linked list
 * Return: length of linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *curr = (list_t *)h;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}

	return (count);
}
