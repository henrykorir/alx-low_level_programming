#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list -  prints all the elements of a linked list
 * @h: linked list head
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	list_t *curr = (list_t *)h;
	int count = 0;

	while (curr != NULL)
	{
		if (curr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", curr->len, curr->str);
		curr = curr->next;
		count++;
	}

	return (count);
}
