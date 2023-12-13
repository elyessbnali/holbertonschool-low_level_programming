#include "lists.h"
/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list
 * @n: number
 * @head: head address
 * Return: new node address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn = malloc(sizeof(dlistint_t));

	if (nn == NULL)
		return (NULL);

	nn->n = n;
	if (*head == NULL)
		nn->next = NULL;
	else
	{
		nn->next = *head;
		(*head)->prev = nn;
	}
	*head = nn;
	return (nn);
}
