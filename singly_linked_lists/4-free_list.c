#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 * @head: pointeur to the first node
 */
void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
