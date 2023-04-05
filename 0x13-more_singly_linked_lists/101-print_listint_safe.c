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
		printf("[%0x] %d\n", &current, current->n);
		n++;
		if (current->next >= current)
		{
			printf("->[%0x] 98\n", &current->next);
			break;
		}
	}

	return (n);
}
