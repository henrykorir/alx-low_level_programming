#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - safely prints listint_t linked list
 * @head: address to the first node
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	listint_t *current = (listint_t *)head;

	if (head == NULL)
		exit(98);
	for (; current != NULL; current = current->next)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		n++;
		if (current->next >= current)
		{
			printf("->[%p] 98\n", (void *)current->next);
			break;
		}
	}

	return (n);
}
