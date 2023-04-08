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
	listint_t *kipchoge = (listint_t *)head;
	size_t steps = 0;
	long int index = 0;
	int visited[10000];

	if (visited == NULL)
		exit(98);
	memset(visited, 0, (10000 * sizeof(int)));
	for (; kipchoge != NULL; kipchoge = kipchoge->next)
	{
		if ((void *)kipchoge < (void *)head)
			index = head - kipchoge;
		else
			index = kipchoge - head;
		if (visited[index] == 1)
		{
			printf("-> [%p] %d\n", (void *)kipchoge, kipchoge->n);
			return (steps);
		}
		printf("[%p] %d\n", (void *)kipchoge, kipchoge->n);
		visited[index] = 1;
		steps++;
	}

	return (steps);
}
