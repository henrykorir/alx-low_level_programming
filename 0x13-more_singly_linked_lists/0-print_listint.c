#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints integers in listint_t list
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	listint_t *curr = (listint_t *)h;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		n++;
	}

	return (n);
}
