#include "hash_tables.h"
/**
 * hash_table_print -function that prints a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int x = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *p = ht->array[i];

		while (p != NULL)
		{
			if (!x)
				printf(", ");
			printf("'%s': '%s'", p->key, p->value);
			x = 0;
			p = p->next;
		}
	}
	printf("}\n");
}
