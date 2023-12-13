#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list.
 * @head: list
 * @index: index
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *p = head;

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
	{
		p = p->next;
		if (p == NULL)
		{
			return (NULL);
		}
	}
	return (p);
}
