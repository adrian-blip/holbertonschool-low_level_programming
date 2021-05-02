#include "lists.h"
/**
 *print_dlistint  - prints all the elements.
 *
 *@h: head
 *
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
© 2021 GitHub, Inc.