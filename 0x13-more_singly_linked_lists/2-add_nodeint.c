#include "lists.h"

/**
 * wadd_nodeint - adds new node at beginning of listint_t list.
 * @head: pointer  to address of head of listint_t list.
 * @n: integer for new node to contain.
 *
 * Return: if function falls - NULL. otherwise - the address of new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
