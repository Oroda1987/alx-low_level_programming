#include "lists.h"
/**
 * *add_nodeint - add a node at the  start of the list
 *@head: head of the list
 *@n:integer where node to be added
 *Return:pointer tonew node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(struct listint_s));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
