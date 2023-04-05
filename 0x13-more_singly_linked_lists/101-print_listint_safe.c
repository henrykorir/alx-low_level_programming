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

	if (head == NULL)
		exit(98);
	for (; head != NULL; head = head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		n++;
		if ((void *)head->next >= (void *)head)
		{
			printf("->[%p] %d\n", (void *)head->next, head->next->n);
			return (n);
		}
	}

	return (n);
}
