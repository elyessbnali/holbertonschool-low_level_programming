#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: to first node
 * Return: i element count
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
