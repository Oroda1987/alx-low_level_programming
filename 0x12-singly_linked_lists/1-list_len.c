#include "lists.h"
/*
 *list_len- prints length of string
 *@h: head n ode
 *Return: length of node
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}

