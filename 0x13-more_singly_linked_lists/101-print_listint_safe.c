#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - safely prints listint_t linked list
 * @head: address to the first node
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *current = (listint_t *)head;
	size_t n = 0;
	long int visited[5000];
	unsigned long int idx = 0;

	if (head == NULL)
		exit(98);
	memset(visited, '0', 5000 * sizeof(int));
	for (; current != NULL; current = current->next)
	{
		if (((void *)current) < ((void *)head))
			idx = head - current;
		else
			idx = current - head;
		if (visited[idx] == 1)
		{
			printf("->[%p] %d\n", (void *)current, current->next->n);
			return (n);
		}
		printf("[%p] %d\n", (void *)current, current->n);
		visited[idx] = 1;
		n++;
	}

	return (n);
}
