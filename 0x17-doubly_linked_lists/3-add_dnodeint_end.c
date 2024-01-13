#include "lists.h"

/**
*add_dnodeint_end - adds a new node at the end of a dlistint_t list
*@head: head of the list
*@n: Value of the element
*Return: the number of nodes
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;

		h->next = new;

	}
	return (new);
}
