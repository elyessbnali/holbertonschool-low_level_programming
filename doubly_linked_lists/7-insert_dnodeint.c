#include "lists.h"
/**
 * insert_dnodeint_at_index - function that adds a new node at index
 * @n: number
 * @h: head address
 * @idx: index
 * Return: new node address (nn)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nn = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i = 1;

	if (nn == NULL)
		return (NULL);

	nn->n = n;
	if (*h == NULL || idx == 0)
	{
		nn->next = current;
		nn->prev = NULL;
		if (current != NULL)
			current->prev = nn;
		*h = nn;
	}
	else
	{
		while (i < idx)
		{
			current = current->next;
			i++;
		}
		nn->next = current->next;
		nn->prev = current;
		if (current->next != NULL)
			current->next->prev = nn;
		current->next = nn;
	}
	return (nn);
}
