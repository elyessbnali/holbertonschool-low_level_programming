#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 * @n: number
 * @head: head address
 * Return: (nn) new node address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (nn == NULL)
		return (NULL);

	nn->n = n;
	if (*head == NULL)
	{
		*head = nn;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = nn;
		nn->prev = last;
	}
	return (nn);
    