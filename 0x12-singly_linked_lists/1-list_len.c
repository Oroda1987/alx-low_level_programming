#include "lists.h"
/**
 *list_len - length of sring
 *
 *@h: head node
 *
 * Return: lengthof node
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

