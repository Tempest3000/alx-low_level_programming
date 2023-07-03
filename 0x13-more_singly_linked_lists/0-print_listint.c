#include "lists.h"
#include <stdio.h>

/**
 * print_listed - prints all elements of listint_t list.
 * @h: pointer to headof listint_t list.
 *
 * Return: number of nodes in listint_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
