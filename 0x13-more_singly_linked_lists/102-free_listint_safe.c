#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint_safe - safely frees listint_t list
 * @h: address of the first node
 * Return: size of the freed listint_t list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *delete = NULL;
	size_t n = 0;
	int direction;

	if (h == NULL || *h == NULL)
		return (0);
	if ((*h)->next == NULL || (*h) == (*h)->next)
	{
		free(*h);
		*h = NULL;
		return (1);
	}
	direction = ((*h)->next - *h) < 0 ? -1 : 1;
	while (*h != NULL)
	{
		if (n > 0 && (*h)->next != NULL)
		{
			if (!((((*h)->next - *h) > 0 && direction > 0) ||
			(((*h)->next - *h) < 0 && direction < 0)))
			{
				free(*h);
				*h = NULL;
				n++;
				break;
			}
		}
		delete = *h;
		*h = (*h)->next;
		free(delete);
		delete = NULL;
		n++;
	}
	h = NULL;

	return (n);
}
