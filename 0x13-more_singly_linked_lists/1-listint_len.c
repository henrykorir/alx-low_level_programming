#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - finds the number of elements in a linked listint_t list.
 * @h: head of the list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	listint_t *curr = (listint_t *)h;
	size_t n = 0;

	while (curr != NULL)
	{
		n++;
		curr = curr->next;
	}

	return (n);
}
