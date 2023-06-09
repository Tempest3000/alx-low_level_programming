#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of listint_t list.
 * @head: pointer to address of head of listint_t list.
 * @n: integer foir new node to contain.
 *
 * Return: if function falls - NULL. otherwise - the address of address of new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
