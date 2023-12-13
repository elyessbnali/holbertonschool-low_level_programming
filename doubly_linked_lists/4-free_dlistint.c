#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t = head;

	while (t != NULL)
	{
		dlistint_t *next_node = t->next;

		free(t);
		t = next_node;
	}
}
